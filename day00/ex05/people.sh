#!/bin/sh
ldapsearch -Q "uid=z*" cn | grep "cn:" | cut -c 5-99 | sort -r -f 
