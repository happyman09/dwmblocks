# dwmblocks

Customizable status bar modules for **DWM**. Display system info like clock, RAM usage, network traffic, and moon phase in a lightweight, modular way.

## Features
- Lightweight and fast
- Modular: `clock`, `moon`, `netraf`, `ram`
- Fully customizable via `Config.h` or Makefile
- Works on Xorg-based DWM setups
- Easily integrated with `st` terminal and DWM status bar

## Included Files
- `clock` → displays current time
- `moon` → shows moon phase
- `netraf` → monitors network traffic
- `ram` → displays RAM usage
- `Config.h` → configuration file for module intervals, colors, etc.

## Installation
Clone the repo and build:

```
git clone https://github.com/<USERNAME>/dwmblocks.git
cd dwmblocks
make
sudo make install
```

## Configuration
Edit `Config.h` to enable/disable modules or adjust update intervals.
Rebuild with make after making changes.

## Usage
Run dwmblocks in your DWM setup to see your customized status bar.
Can be combined with st, dmenu, and other Xorg-based tools.
