Here is where we show how to show git stuff in terminal

function parse_git_branch () {
  git branch 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/ (\1)/'
}
 
RED="\[\033[0;31m\]"
YELLOW="\[\033[0;33m\]"
GREEN="\[\033[0;32m\]"
NO_COLOR="\[\033[0m\]"
 
PS1="$GREEN\u@\h$NO_COLOR:\w$YELLOW\$(parse_git_branch)$NO_COLOR\n\$ "
#cd / && cd /mnt/c/dev/OPENSTOREFRONT_project/openstorefront/

LS_COLORS='di=0;35:ow=0;35:';
export LS_COLORS
