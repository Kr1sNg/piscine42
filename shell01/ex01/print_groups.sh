#!/bin/sh

id --groups --name $FT_USER | tr --truncate-set1 ' ' ',' | tr --delete '\n'
