cat /etc/passwd | grep -v "#" | sed -n '2~2p' | sed -n $FT_LINE1','$FT_LINE2'p' | sed 's/\(:[^\n]*\)//g' | rev | sort -r | tr '\n' ' ' | sed 's/\s/, /g' | sed 's/,.$/./'
