ifconfig | grep "ether" | awk '{printf $2"\n"}'
