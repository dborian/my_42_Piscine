cp $@ ~/goinfre
name=$(echo $@ | sed 's#.*/##')
sed -i '1,11d' ~/goinfre/$name
sed -i "s/\/\///g" ~/goinfre/$name
sed -i "s/\/\*//g" ~/goinfre/$name
sed -i "s/\*\///g" ~/goinfre/$name
cc -g3 -lbsd -Wall -Wextra -Werror ~/goinfre/$name
rm ~/goinfre/$name
