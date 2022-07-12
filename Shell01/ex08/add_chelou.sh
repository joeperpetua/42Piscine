FT_1=$(echo "$FT_NBR1" | tr \'\\\\\"\?\! '01234')
FT_2=$(echo "$FT_NBR2" | tr 'mrdoc' '01234')
FT_BASE13=$(echo "obase=13; ibase=5; $FT_1 + $FT_2" | bc)
echo $FT_BASE13 | tr '0123456789ABC' 'gtaio luSnemf'
