from moviepy.editor import ImageSequenceClip
import os
image_folder = 'data'
output_video_path = 'output.mp4'
# image_files = [f for f in os.listdir(image_folder) if f.endswith('.png')]
image_files = sorted([f for f in os.listdir(image_folder) if f.endswith('.png')])

frame_rate = 16  # 每秒显示的帧数
image_paths = [os.path.join(image_folder, f) for f in image_files]
clip = ImageSequenceClip(image_paths, fps=frame_rate)
clip.write_videofile(output_video_path, codec='libx264', audio=False)
print(f"视频已保存到 {output_video_path}")