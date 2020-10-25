#!/bin/sh
timestamp=$(date +"%D %T")
message=$1
git add -A;
git commit -m "[$timestamp]: $message"
git push https://github.com/ndnam198/STM32_UART_STRING_RX_IT.git master

