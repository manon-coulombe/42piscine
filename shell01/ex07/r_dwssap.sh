awk -F":" '{$5=""; print}' /etc/passwd | sed -n 2~2p | awk '{print $1}' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" "," | sed 's/,$/./' | sed 's/,/, /g' | tr -d '\n'
