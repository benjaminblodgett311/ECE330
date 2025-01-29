#!/bin/bash

rand4="$(./randfour)"

while true; do
    echo -n "0b$rand4: "
    read -r answer

    correct_answer=$(printf "%X" "$((2#$rand4))")

    if [[ "$answer" == "$correct_answer" ]]; then
        rand4="$(./randfour)"
    else
        echo "$correct_answer"
    fi
done
