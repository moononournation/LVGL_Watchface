# LVGL Watchface

## Anchor Escapement Video Source

* [Ulysse Nardin In-House Made & Designed Silicon Anchor Escapement | aBlogtoWatch](https://www.youtube.com/watch?v=Nu5Xe51Q_oE)

## Video to Image File Conversion

```properties
ffmpeg -y -i watch.mp4 -ss 1:30.4 -t 0.37 -vf "crop=320:320:173:17" out.mp4
ffmpeg -y -i out.mp4 -vf "scale=160:160:flags=lanczos" 'out%02d.png'
```

## Watchface Clipart

* [Image by macrovector](https://www.freepik.com/free-vector/watch-set-expensive-classic-clock-with-leather-metal-straps-illustration_13031503.htm) on Freepik
