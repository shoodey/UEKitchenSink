# KitchenSink

Unreal Engine 5.7 project serving as the integration playground for the [UEGameSystems](https://github.com/shoodey/UEGameSystems) plugin family — a personal library of reusable RPG / survival game systems (items & storage, combat, crafting, …). The "game" inside KitchenSink is the demo harness, not the product; the plugins are.

## Stack

- Unreal Engine 5.7.4
- Third-person template as the base playground

## Getting started

```bash
git clone --recurse-submodules git@github.com:shoodey/UEKitchenSink.git
```

If you already cloned without `--recurse-submodules`:

```bash
git submodule update --init --recursive
```

The `Plugins/GameSystems/` submodule points at a private repository — clone will succeed even without access, but the submodule directory will be empty.

## Layout

```
KitchenSink/
  Source/KitchenSink/        # Game module — third-person template + Demo/ glue
  Content/                   # Template + KitchenSinkDemo assets
  Plugins/
    Developer/RiderLink/     # IDE integration
    GameSystems/             # Private submodule — reusable GS* plugins
  Config/                    # UE project config
```
