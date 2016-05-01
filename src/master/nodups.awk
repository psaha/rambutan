##161:

#line 2529 "spider.web"

#line 2530 "spider.web"
{if($0==last){
print"Error: duplicate name",$0,"on lines",NR-1"-"NR
exit-1
}
last=$0
}
##:161

