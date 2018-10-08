#!/bin/sh
cat $1 | grep -i -e "Nicolas.Bomber" | grep -e '...-...-..' -e '(...)...-....' | rev | cut -f 2 | rev
