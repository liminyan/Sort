#include "sort.h"

#include <algorithm>
#include <thread>

#include "window_utils.h"

void bubbleSort(std::vector<int>& arr, sf::RenderWindow& window) {
    int frameCount = 0;
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                window.clear();
                int rest_max_index = 0;
                int tmp = arr[0];
                for (int k = 0; k < n-i-1; k++){
                    if (tmp < arr[k]){
                        rest_max_index = k;
                        tmp = arr[k];
                    }
                }
                for (int k = 0; k < n; k++) {
                    sf::RectangleShape rect(sf::Vector2f(10, arr[k]));
                    rect.setPosition(sf::Vector2f(k * 12, 600 - arr[k])); // 修改为 sf::Vector2f
                    if(k == rest_max_index){
                        rect.setFillColor(sf::Color::Red);
                    }else
                    if(k == j+1){
                        rect.setFillColor(sf::Color::Blue);
                    }else{
                        rect.setFillColor(sf::Color::White);
                    }
                    window.draw(rect);
                }
                window.display();
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
                SaveWindow(window, frameCount);
                ++frameCount;
            }
        }
    }
   for (int k = 0; k < n; k++) {
       sf::RectangleShape rect(sf::Vector2f(10, arr[k]));
       rect.setPosition(sf::Vector2f(k * 12, 600 - arr[k])); // 修改为 sf::Vector2f
       window.draw(rect);
    }
    window.display();
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    SaveWindow(window, frameCount);
}

int DisplaySortState(std::vector<int>& arr,std::vector<int>& pivotIndexList, sf::RenderWindow& window, int i, int j, int pivotIndex, int pivotValue , int left, int right, int frameCount) {
  if(left >= right){
     return frameCount;
  }
  for (int k = 0; k < arr.size(); ++k) { 
      sf::RectangleShape rect(sf::Vector2f(10, arr[k]));
      rect.setPosition(sf::Vector2f(k * 12, 600 - arr[k]));
      if(k < left || k > right){
         rect.setFillColor(sf::Color::White);
       } else if (arr[k] < pivotValue) {
           rect.setFillColor(sf::Color::Cyan); // 高亮显示当前交换的元素和分区点
       } else {
           rect.setFillColor(sf::Color{200, 200, 200});
       }               
       if (k == j || k == i) {
           rect.setFillColor(sf::Color::Magenta); // 高亮显示当前考察的元素
       }    
       if (k == pivotIndex) {
           rect.setFillColor(sf::Color::Red); // 高亮显示当前考察的元素
       }
       window.draw(rect);
       if (k == left || k == right) {
          sf::RectangleShape rect(sf::Vector2f(4, 600 - arr[k]));
          rect.setPosition(sf::Vector2f(k * 12, 0));
          rect.setFillColor(sf::Color::Green);
          window.draw(rect);
       }
  }
  for(int k = 0; k < pivotIndexList.size(); ++k) {
      int index = pivotIndexList[k];
      sf::RectangleShape rect(sf::Vector2f(10, arr[index]));
      rect.setPosition(sf::Vector2f(index * 12, 600 - arr[index]));
      rect.setFillColor(sf::Color::Green);
      window.draw(rect);
  }
  window.display();
  std::this_thread::sleep_for(std::chrono::milliseconds(50));
  SaveWindow(window, frameCount);
  ++frameCount;      
  return frameCount;
}

struct RunState {
  int left = -1;
  int right = -1;
  int frameCount = 0;
};

std::vector<RunState>  SubQuickSort(std::vector<int>& arr,std::vector<int>& pivotIndexList, sf::RenderWindow& window, int left, int right, int frameCount) {
if (right == -1) {
        right = arr.size() - 1;
    }
    if (left >= right) {
        window.clear();
        return {};
    }
    int pivotIndex = right;
    int pivotValue = arr[pivotIndex];
    int i = left - 1;
    for (int j = left; j < pivotIndex; ++j) {
        if (arr[j] < pivotValue) {
            ++i;
            std::swap(arr[i], arr[j]);
            window.clear();
            frameCount = DisplaySortState( arr, pivotIndexList,  window,  i,  j,  pivotIndex,  pivotValue,  left,  right,  frameCount); 
        }
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    window.clear();
    frameCount = DisplaySortState( arr, pivotIndexList,  window,  i + 1,  pivotIndex,  pivotIndex,  pivotValue,  left,  right,  frameCount); 
    std::swap(arr[i + 1], arr[pivotIndex]);
    window.clear();
    frameCount = DisplaySortState( arr, pivotIndexList,  window,  i + 1,  pivotIndex,  i + 1,  pivotValue,  left,  right,  frameCount); 
    pivotIndexList.emplace_back(i + 1);
    window.clear();
    frameCount = DisplaySortState( arr, pivotIndexList,  window,  i + 1,  pivotIndex,  i + 1,  pivotValue,  left,  right,  frameCount); 
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    window.clear();
    frameCount = DisplaySortState( arr, pivotIndexList,  window,  i + 1,  pivotIndex,  pivotIndex,  pivotValue,  left,  right,  frameCount); 
    std::swap(arr[i + 1], arr[pivotIndex]);
    window.clear();
    frameCount = DisplaySortState( arr, pivotIndexList,  window,  i + 1,  pivotIndex,  i + 1,  pivotValue,  left,  right,  frameCount); 
    window.clear();
    frameCount = DisplaySortState( arr, pivotIndexList,  window,  i + 1,  pivotIndex,  i + 1,  pivotValue,  left,  right,  frameCount); 
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    window.clear();
    frameCount = DisplaySortState( arr, pivotIndexList,  window,  i + 1,  pivotIndex,  pivotIndex,  pivotValue,  left,  right,  frameCount); 
    std::swap(arr[i + 1], arr[pivotIndex]);
    window.clear();
    frameCount = DisplaySortState( arr, pivotIndexList,  window,  i + 1,  pivotIndex,  i + 1,  pivotValue,  left,  right,  frameCount); 
    window.clear();
    frameCount = DisplaySortState( arr, pivotIndexList,  window,  i + 1,  pivotIndex,  i + 1,  pivotValue,  left,  right,  frameCount); 
    std::this_thread::sleep_for(std::chrono::milliseconds(40));

    std::vector<RunState> run_states;
    if(left < i){
       run_states.emplace_back(RunState{left, i, frameCount});
    }
    if(i + 2 < right) {
       run_states.emplace_back(RunState{i + 2, right, frameCount});
    }
    return run_states;
}



void quickSort(std::vector<int>& arr, sf::RenderWindow& window, int left , int right) {
    right = arr.size() - 1;
    std::vector<int> pivotIndexList;
    pivotIndexList.reserve(arr.size());
    int frameCount = 0;
    std::vector<RunState> run_states;
    run_states.emplace_back(RunState{left,right,frameCount});
    int start = 0;
    int end = 1;
    while (start < end) {
       int left_ = run_states[start].left;
       int right_ = run_states[start].right;
       auto states = SubQuickSort(arr, pivotIndexList, std::ref(window), left_, right_, frameCount);
       if(!states.empty()) {
          frameCount = states.front().frameCount;
       }
       for (const auto& state: states) {
          run_states.emplace_back(state);
          ++ end;
       }
       ++ start;
    }
}

