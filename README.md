# LVGL Watchface

## Anchor Escapement Video Source

* [Ulysse Nardin In-House Made & Designed Silicon Anchor Escapement | aBlogtoWatch](https://www.youtube.com/watch?v=Nu5Xe51Q_oE)
* [How a Mechanical Watch Works | Explained in 5 Minutes
](https://www.youtube.com/watch?v=d_pV8TGKfMc)
* [Ulysse Nardin Ulysse Anchor Tourbillon](https://youtu.be/jrP4_Kq6SjI)

## Video to Image File Conversion

```console
ffmpeg -y -i watch.mp4 -ss 1:30.4 -t 0.37 -vf "crop=320:320:173:17" out.mp4
ffmpeg -y -i out.mp4 -vf "scale=160:160:flags=lanczos" 'out%02d.png'
```

```console
ffmpeg -y -i watch.mp4 -ss 4:09.0 -t 0.32 -vf "crop=400:400:408:147" out.mp4
ffmpeg -y -i out.mp4 -vf "transpose=2,scale=76:76:flags=lanczos" 'out%1d.png'
```

```console
ffmpeg -y -i watch.mp4 -ss 4:09.0 -t 0.32 -vf "crop=280:280:468:207" out.mp4
ffmpeg -y -i out.mp4 -vf "scale=64:64:flags=lanczos" 'out%d.png'
```

```console
ffmpeg -y -i watch.mp4 -ss 0:12.6 -t 0.4 -vf "crop=680:680:303:31" out.mp4
ffmpeg -y -i out.mp4 -vf "scale=160:160:flags=lanczos" 'out%2d.png'
```

## Watchface Clipart

* [Image by macrovector](https://www.freepik.com/free-vector/watch-set-expensive-classic-clock-with-leather-metal-straps-illustration_13031503.htm) on Freepik
* [Image by macrovector](https://www.freepik.com/free-vector/watch-set-expensive-classic-clock-with-leather-metal-straps-illustration_13031503.htm) on Freepik