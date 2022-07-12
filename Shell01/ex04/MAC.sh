ifconfig | grep ether | sed 's/ether//g' | sed 's/\(tx[^\.]*\)//g' | sed 's/\s//g'
