read -p "enter two numbers" a b
val=`expr $a + $b`
echo "$val"
val=`expr $a - $b`
echo " $val"
val=`expr $a \* $b`
echo "$val"
val=`expr $a / $b`
echo " $val"
