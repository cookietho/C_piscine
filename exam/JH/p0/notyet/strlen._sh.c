Assignment name  : strlen_sh
Expected files   : strlen.sh
Allowed functions: 
--------------------------------------------------------------------------------

Write a shell script that displays the length of the string contained in the
environment variable FT_LINE, followed by a \n.

Example:

$> echo $FT_LINE
Les stagiaires du staff ne sentent pas toujours tres bon.
$> zsh strlen.sh
57
$>




#!/bin/sh
# zsh strlen.sh
string=(echo $FT_LINE)

if [ "$string" ]; then
	echo -n $FT_LINE | wc -m
fi
