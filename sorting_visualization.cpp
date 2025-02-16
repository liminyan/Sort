#include <SFML/Graphics.hpp>
#include <vector>

#include "sort.h"

bool isNonDecreasingOrdered(const std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false; // 如果发现某个元素小于前一个元素，则数组不是非递减有序的
        }
    }
    return true; // 如果遍历完整个数组都没有发现逆序对，则数组是非递减有序的
}

// 如果你还想检查数组是否是非递增有序的，可以编写另一个函数：
bool isNonIncreasingOrdered(const std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[i - 1]) {
            return false; // 如果发现某个元素大于前一个元素，则数组不是非递增有序的
        }
    }
    return true; // 如果遍历完整个数组都没有发现顺序对（即都是逆序或相等），则数组是非递增有序的
}

// 或者，如果你想要一个函数来判断数组是否是有序的（无论是非递减还是非递增），你可以这样写：
bool isOrdered(const std::vector<int>& arr) {
    bool Decreasing = isNonDecreasingOrdered(arr);
    bool Increasing = isNonIncreasingOrdered(arr);
    return Decreasing || Increasing;
}

int main() {
    // 创建一个窗口
    sf::RenderWindow window(sf::VideoMode(sf::Vector2u(1000, 600)), "Sorting Visualization"); // 修改为 sf::Vector2u

    // 初始化一个随机数组
    std::vector<int> arr;
    for (int i = 0; i < 80; i++) {
        arr.push_back(rand() % 500 + 50);
    }
    // 主循环
    while (window.isOpen() && !isOrdered(arr)) {
        // 使用 std::optional 处理事件
        while (std::optional<sf::Event> event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) { // 检查是否为关闭事件
                window.close();
            }
        }
        // 清空窗口
        window.clear();
        // 绘制当前的数组状态
        for (int i = 0; i < arr.size(); i++) {
            sf::RectangleShape rect(sf::Vector2f(10, arr[i]));
            rect.setPosition(sf::Vector2f(i * 12, 600 - arr[i])); // 修改为 sf::Vector2f
            rect.setFillColor(sf::Color::White);
            window.draw(rect);
        }
        // 显示绘制的内容
        window.display();
        quickSort(arr, window);
    }
    return 0;
}
