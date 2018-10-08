#!/bin/sh
ifconfig | grep "..:..:..:..:..:.." | cut -d ' ' -f 2 
