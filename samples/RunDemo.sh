#!/usr/bin/env bash
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

arch=$(uname -m)
demo_name="demo_linux"
if [ "$arch" = "x86_64" ]; then
    demo_name+="64"
elif [ "$arch" = "i686" ]; then
    demo_name+="86"
else
    exit 1
fi

cmake -B build #-DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang
cmake --build build --parallel 12
if [ $? -ne 0 ]; then
    echo "Build failed"
    exit 1
fi

export LD_LIBRARY_PATH="$SCRIPT_DIR/../lib:$LD_LIBRARY_PATH"

# demo uses relative paths ("../license.xml", "../../resource"); run from demo/.
cd "$SCRIPT_DIR/demo"
"$SCRIPT_DIR/build/$demo_name"
