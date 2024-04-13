#!/bin/bash

value="${HOME}/Embedded_linux/c++\n${HOME}/Embedded_linux/Bash\n${HOME}/robot_final/src"

select=$(echo -e "$value" | fzf)

nautilus "$select" &