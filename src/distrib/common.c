/*1:*/
#line 49 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 4 "/Users/psaha/Git/rambutan/src/master/common.ch"
#include<stdio.h>
#include<string.h>
#line 51 "/Users/psaha/Git/rambutan/src/master/common.web"
#ifdef MSDOS
#define index strchr
#endif

/*3:*/
#line 71 "/Users/psaha/Git/rambutan/src/master/common.web"

extern char the_at_sign;


/*:3*//*65:*/
#line 1052 "/Users/psaha/Git/rambutan/src/master/common.web"
extern char C_file_extension[];
#line 1053 "/Users/psaha/Git/rambutan/src/master/common.web"

/*:65*/
#line 55 "/Users/psaha/Git/rambutan/src/master/common.web"

/*9:*/
#line 197 "/Users/psaha/Git/rambutan/src/master/common.web"
char setting_up;
#line 198 "/Users/psaha/Git/rambutan/src/master/common.web"

/*:9*/
#line 56 "/Users/psaha/Git/rambutan/src/master/common.web"

/*4:*/
#line 75 "/Users/psaha/Git/rambutan/src/master/common.web"

typedef short boolean;
typedef char unsigned eight_bits;
boolean program;

/*:4*//*6:*/
#line 159 "/Users/psaha/Git/rambutan/src/master/common.web"

typedef char ASCII;
typedef char outer_char;

/*:6*//*7:*/
#line 167 "/Users/psaha/Git/rambutan/src/master/common.web"

ASCII xord[127+1];
outer_char xchr[128];

/*:7*//*12:*/
#line 259 "/Users/psaha/Git/rambutan/src/master/common.web"

ASCII buffer[500];
ASCII *buffer_end= buffer+200-2;
ASCII *limit;
ASCII *loc;

/*:12*//*14:*/
#line 312 "/Users/psaha/Git/rambutan/src/master/common.web"

int include_depth;
FILE *file[10
#line 11 "/Users/psaha/Git/rambutan/src/master/common.ch"
];
FILE *change_file;
char file_name[10
#line 11 "/Users/psaha/Git/rambutan/src/master/common.ch"
][128
#line 306 "/Users/psaha/Git/rambutan/src/master/common.web"
];

char change_file_name[128
#line 306 "/Users/psaha/Git/rambutan/src/master/common.web"
];
int line[10
#line 11 "/Users/psaha/Git/rambutan/src/master/common.ch"
];
int change_line;
boolean input_has_ended;
boolean changing;

/*:14*//*26:*/
#line 501 "/Users/psaha/Git/rambutan/src/master/common.web"

typedef unsigned short sixteen_bits;
sixteen_bits module_count;
boolean changed_module[2000];
boolean print_where= 0;

/*:26*//*37:*/
#line 638 "/Users/psaha/Git/rambutan/src/master/common.web"

typedef struct name_info{
ASCII *byte_start;
 /*41:*/
#line 677 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 678 "/Users/psaha/Git/rambutan/src/master/common.web"
struct name_info *link;

/*:41*//*48:*/
#line 767 "/Users/psaha/Git/rambutan/src/master/common.web"

union{
struct name_info *Rlink;

eight_bits Ilk;
}dummy;

/*:48*//*55:*/
#line 906 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 907 "/Users/psaha/Git/rambutan/src/master/common.web"
ASCII *equiv_or_xref;

/*:55*/
#line 641 "/Users/psaha/Git/rambutan/src/master/common.web"

}name_info;
typedef name_info *name_pointer;
ASCII byte_mem[90000];
ASCII *byte_mem_end= byte_mem+90000-1;
name_info name_dir[4000];
name_pointer name_dir_end= name_dir+4000-1;

/*:37*//*39:*/
#line 663 "/Users/psaha/Git/rambutan/src/master/common.web"

name_pointer name_ptr;
ASCII *byte_ptr;

/*:39*//*42:*/
#line 690 "/Users/psaha/Git/rambutan/src/master/common.web"

typedef name_pointer *hash_pointer;
name_pointer hash[353];
hash_pointer hash_end= hash+353-1;
hash_pointer h;

/*:42*//*56:*/
#line 926 "/Users/psaha/Git/rambutan/src/master/common.web"

int history= 0;

/*:56*//*64:*/
#line 1039 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1040 "/Users/psaha/Git/rambutan/src/master/common.web"
int argc;
char * *argv;
char C_file_name[128
#line 306 "/Users/psaha/Git/rambutan/src/master/common.web"
];
char tex_file_name[128
#line 306 "/Users/psaha/Git/rambutan/src/master/common.web"
];
int no_xref;

/*:64*//*75:*/
#line 1165 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1166 "/Users/psaha/Git/rambutan/src/master/common.web"
FILE *C_file;
FILE *tex_file;

/*:75*/
#line 57 "/Users/psaha/Git/rambutan/src/master/common.web"

/*5:*/
#line 86 "/Users/psaha/Git/rambutan/src/master/common.web"
int phase;
#line 87 "/Users/psaha/Git/rambutan/src/master/common.web"

/*:5*//*15:*/
#line 334 "/Users/psaha/Git/rambutan/src/master/common.web"

ASCII change_buffer[200];
ASCII *change_limit;

/*:15*//*30:*/
#line 536 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1 ""

#line 187"/home/itp/psaha/Local/rambutan/src/master/pathopen.web"

void pathaddname();
void pathaddpath();
void pathreset();
FILE *pathopen();

#line 538 "/Users/psaha/Git/rambutan/src/master/common.web"
/*:30*//*50:*/
#line 792 "/Users/psaha/Git/rambutan/src/master/common.web"

name_pointer install_node();

/*:50*/
#line 58 "/Users/psaha/Git/rambutan/src/master/common.web"

/*8:*/
#line 183 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 184 "/Users/psaha/Git/rambutan/src/master/common.web"
common_init()
{
strncpy(xchr,"                                 !\"#$%&'()*+,-./0123456789\
:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~ ",128);
/*11:*/
#line 238 "/Users/psaha/Git/rambutan/src/master/common.web"


/*:11*/
#line 188 "/Users/psaha/Git/rambutan/src/master/common.web"
;
/*10:*/
#line 202 "/Users/psaha/Git/rambutan/src/master/common.web"
{
#line 203 "/Users/psaha/Git/rambutan/src/master/common.web"
int i;
for(i= 0;i<=127;i++)
xord[i]= 32;
for(i= 1;i<127;i++)xord[xchr[i]]= i;
}

/*:10*/
#line 189 "/Users/psaha/Git/rambutan/src/master/common.web"
;
/*40:*/
#line 667 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 668 "/Users/psaha/Git/rambutan/src/master/common.web"
name_dir->byte_start= byte_ptr= byte_mem;
name_ptr= name_dir+1;
name_ptr->byte_start= byte_mem;

/*:40*//*43:*/
#line 698 "/Users/psaha/Git/rambutan/src/master/common.web"

for(h= hash;h<=hash_end; *h++= NULL);

/*:43*//*49:*/
#line 774 "/Users/psaha/Git/rambutan/src/master/common.web"

name_dir->dummy.Rlink= NULL;

/*:49*/
#line 190 "/Users/psaha/Git/rambutan/src/master/common.web"
;
setting_up= 1;
/*76:*/
#line 1169 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1170 "/Users/psaha/Git/rambutan/src/master/common.web"
scan_args();
/*28:*/
#line 532 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 533 "/Users/psaha/Git/rambutan/src/master/common.web"
pathaddpath(getenv("WEBPATH"),':');
/*:28*/
#line 1171 "/Users/psaha/Git/rambutan/src/master/common.web"

if(program==0){
if((C_file= fopen(C_file_name,"w"))==NULL)
{printf("! Cannot open output file ");err_print(C_file_name);history= 3;wrap_up();};
}
else{
if((tex_file= fopen(tex_file_name,"w"))==NULL)
{printf("! Cannot open output file ");err_print(tex_file_name);history= 3;wrap_up();};
}

/*:76*/
#line 192 "/Users/psaha/Git/rambutan/src/master/common.web"
;
setting_up= 0;
}

/*:8*//*13:*/
#line 269 "/Users/psaha/Git/rambutan/src/master/common.web"

#include<stdio.h>
input_ln(fp)
FILE *fp;
{
register int c;
register ASCII *k;
if(feof(fp))return(0);
limit= k= buffer;
while(k<=buffer_end&&(c= getc(fp))!=EOF&&c!='\n')
if(( *(k++)= xord[c])!=32)limit= k;
if(k>buffer_end)
if((c= getc(fp))!=EOF&&c!='\n'){
ungetc(c,fp);loc= buffer;err_print("\n! Input line too long");

}
if(c==EOF&&limit==buffer)return(0);

return(1);
}

/*:13*//*16:*/
#line 344 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 17 "/Users/psaha/Git/rambutan/src/master/common.ch"
void prime_the_change_buffer()
#line 346 "/Users/psaha/Git/rambutan/src/master/common.web"
{
change_limit= 0;
/*17:*/
#line 358 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 359 "/Users/psaha/Git/rambutan/src/master/common.web"
while(1){
change_line++;
if(!input_ln(change_file))return;
if(limit<buffer+2)continue;
if(buffer[0]!=the_at_sign)continue;
/*18:*/
#line 376 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 377 "/Users/psaha/Git/rambutan/src/master/common.web"
if(buffer[1]>=88&&buffer[1]<=90||buffer[1]==73)buffer[1]+= 122-90;

/*:18*/
#line 364 "/Users/psaha/Git/rambutan/src/master/common.web"
;
/*19:*/
#line 381 "/Users/psaha/Git/rambutan/src/master/common.web"
{
#line 382 "/Users/psaha/Git/rambutan/src/master/common.web"
if(buffer[1]==105){
loc= buffer+2;
err_print("! No includes allowed in change file");

}
}

/*:19*/
#line 365 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if(buffer[1]==120)break;
if(buffer[1]==121||buffer[1]==122){
loc= buffer+2;
err_print("! Where is the matching @x?");

}
}

/*:17*/
#line 348 "/Users/psaha/Git/rambutan/src/master/common.web"
;
/*20:*/
#line 391 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 392 "/Users/psaha/Git/rambutan/src/master/common.web"
do{
change_line++;
if(!input_ln(change_file)){
err_print("! Change file ended after @x");

return;
}
}while(limit==buffer);

/*:20*/
#line 349 "/Users/psaha/Git/rambutan/src/master/common.web"
;
/*21:*/
#line 401 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 402 "/Users/psaha/Git/rambutan/src/master/common.web"
{
change_limit= change_buffer-buffer+limit;
strncpy(change_buffer,buffer,limit-buffer+1);
}

/*:21*/
#line 350 "/Users/psaha/Git/rambutan/src/master/common.web"
;
}

/*:16*//*22:*/
#line 416 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 23 "/Users/psaha/Git/rambutan/src/master/common.ch"
void check_change()
#line 418 "/Users/psaha/Git/rambutan/src/master/common.web"
{
int n= 0;
if((change_limit-change_buffer!=limit-buffer||strncmp(buffer,change_buffer,limit-buffer)))return;
while(1){
changing= 1;print_where= 1;change_line++;
if(!input_ln(change_file)){
err_print("! Change file ended before @y");

change_limit= 0;changing= 0;print_where= 1;
return;
}
if(limit>buffer+1&&buffer[0]==the_at_sign)
/*19:*/
#line 381 "/Users/psaha/Git/rambutan/src/master/common.web"
{
#line 382 "/Users/psaha/Git/rambutan/src/master/common.web"
if(buffer[1]==105){
loc= buffer+2;
err_print("! No includes allowed in change file");

}
}

/*:19*/
#line 430 "/Users/psaha/Git/rambutan/src/master/common.web"
;
/*23:*/
#line 447 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 448 "/Users/psaha/Git/rambutan/src/master/common.web"
if(limit>buffer+1&&buffer[0]==the_at_sign){
/*18:*/
#line 376 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 377 "/Users/psaha/Git/rambutan/src/master/common.web"
if(buffer[1]>=88&&buffer[1]<=90||buffer[1]==73)buffer[1]+= 122-90;

/*:18*/
#line 449 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if(buffer[1]==120||buffer[1]==122){
loc= buffer+2;err_print("! Where is the matching @y?");

}
else if(buffer[1]==121){
if(n>0){
loc= buffer+2;
err_print("! Hmm... some of the preceding lines failed to match");

}
return;
}
}

/*:23*/
#line 432 "/Users/psaha/Git/rambutan/src/master/common.web"
;
/*21:*/
#line 401 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 402 "/Users/psaha/Git/rambutan/src/master/common.web"
{
change_limit= change_buffer-buffer+limit;
strncpy(change_buffer,buffer,limit-buffer+1);
}

/*:21*/
#line 433 "/Users/psaha/Git/rambutan/src/master/common.web"
;
changing= 0;print_where= 1;line[include_depth]++;
while(!input_ln(file[include_depth])){
if(include_depth==0){
err_print("! WEB file ended during a change");

input_has_ended= 1;return;
}
include_depth--;print_where= 1;line[include_depth]++;
}
if((change_limit-change_buffer!=limit-buffer||strncmp(buffer,change_buffer,limit-buffer)))n++;
}
}

/*:22*//*24:*/
#line 467 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 468 "/Users/psaha/Git/rambutan/src/master/common.web"
reset_input()
{
limit= buffer;loc= buffer+1;buffer[0]= 32;
/*25:*/
#line 480 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 481 "/Users/psaha/Git/rambutan/src/master/common.web"
if((file[0]= fopen(file_name[0],"r"))==NULL)
{printf("! Cannot open input file ");err_print(file_name[0]);history= 3;wrap_up();};
if((change_file= fopen(change_file_name,"r"))==NULL)
{printf("! Cannot open change file ");err_print(change_file_name);history= 3;wrap_up();};

/*:25*/
#line 471 "/Users/psaha/Git/rambutan/src/master/common.web"
;
line[include_depth]= 0;change_line= 0;include_depth= 0;
changing= 1;prime_the_change_buffer();changing= !changing;
limit= buffer;loc= buffer+1;buffer[0]= 32;input_has_ended= 0;
}

/*:24*//*27:*/
#line 507 "/Users/psaha/Git/rambutan/src/master/common.web"

get_line()
{
restart:
if(changing)changed_module[module_count]= 1;
else/*34:*/
#line 574 "/Users/psaha/Git/rambutan/src/master/common.web"
{
#line 575 "/Users/psaha/Git/rambutan/src/master/common.web"
line[include_depth]++;
while(!input_ln(file[include_depth])){
print_where= 1;
if(include_depth==0){input_has_ended= 1;break;}
else{fclose(file[include_depth]);include_depth--;line[include_depth]++;}
}
if(!input_has_ended)
if(limit==change_limit-change_buffer+buffer)
if(buffer[0]==change_buffer[0])
if(change_limit>change_buffer)check_change();
}

/*:34*/
#line 512 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if(changing){
/*35:*/
#line 587 "/Users/psaha/Git/rambutan/src/master/common.web"
{
#line 588 "/Users/psaha/Git/rambutan/src/master/common.web"
change_line++;
if(!input_ln(change_file)){
err_print("! Change file ended without @z");

buffer[0]= the_at_sign;buffer[1]= 122;limit= buffer+2;
}
if(limit>buffer+1)
if(buffer[0]==the_at_sign){
/*18:*/
#line 376 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 377 "/Users/psaha/Git/rambutan/src/master/common.web"
if(buffer[1]>=88&&buffer[1]<=90||buffer[1]==73)buffer[1]+= 122-90;

/*:18*/
#line 596 "/Users/psaha/Git/rambutan/src/master/common.web"
;
/*19:*/
#line 381 "/Users/psaha/Git/rambutan/src/master/common.web"
{
#line 382 "/Users/psaha/Git/rambutan/src/master/common.web"
if(buffer[1]==105){
loc= buffer+2;
err_print("! No includes allowed in change file");

}
}

/*:19*/
#line 597 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if(buffer[1]==120||buffer[1]==121){
loc= buffer+2;err_print("! Where is the matching @z?");

}
else if(buffer[1]==122){
prime_the_change_buffer();changing= !changing;print_where= 1;
}
}
}

/*:35*/
#line 514 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if(!changing){
changed_module[module_count]= 1;goto restart;
}
}
loc= buffer; *limit= 32;
if( *buffer==the_at_sign&&( *(buffer+1)==105|| *(buffer+1)==73))
/*33:*/
#line 546 "/Users/psaha/Git/rambutan/src/master/common.web"
{
#line 547 "/Users/psaha/Git/rambutan/src/master/common.web"
ASCII *k, *j;
loc= buffer+2;
while(loc<=limit&&( *loc==32|| *loc==9|| *loc==34))loc++;
if(loc>=limit)err_print("! Include file name not given");

else{
if(++include_depth<10
#line 11 "/Users/psaha/Git/rambutan/src/master/common.ch"
){
k= file_name[include_depth];j= loc;
while( *loc!=32&& *loc!=9&& *loc!=34) *k++= xchr[ *loc++];
 *k= '\0';
if((file[include_depth]= pathopen(file_name[include_depth],"r"))==NULL){
loc= j;
include_depth--;
err_print("! Cannot find include file on path");

}
else{line[include_depth]= 0;print_where= 1;}
}
else{
include_depth--;
err_print("! Too many nested includes");

}
}
goto restart;
}

/*:33*/
#line 521 "/Users/psaha/Git/rambutan/src/master/common.web"
;
return(!input_has_ended);
}

/*:27*//*32:*/
#line 539 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 540 "/Users/psaha/Git/rambutan/src/master/common.web"
void overflow (s)
char *s;
{{{printf("\n! Sorry, capacity exceeded: ");err_print(s);history= 3;wrap_up();};};}
/*:32*//*36:*/
#line 611 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 612 "/Users/psaha/Git/rambutan/src/master/common.web"
check_complete(){
if(change_limit!=0){
strncpy(buffer,change_buffer,change_limit-change_buffer+1);
limit= change_limit-change_buffer+buffer;
changing= 1;loc= change_limit;
err_print("! Change file entry did not match");

}
}

/*:36*//*57:*/
#line 940 "/Users/psaha/Git/rambutan/src/master/common.web"

err_print(s)
char *s;
{
ASCII *k, *l;
#line 31 "/Users/psaha/Git/rambutan/src/master/common.ch"
printf("%s\n",(s==(char *)0)?"Bad error message!!!":s);
if(setting_up){
printf("Error occurred while scanning arguments or opening output files.\n");
#line 948 "/Users/psaha/Git/rambutan/src/master/common.web"
}else{
/*58:*/
#line 963 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 964 "/Users/psaha/Git/rambutan/src/master/common.web"
if(changing)printf(". (l. %d of change file)\n",change_line);
else if(include_depth==0)printf(". (l. %d)\n",line[include_depth]);
else printf(". (l. %d of include file %s)\n",line[include_depth],file_name[include_depth]);
l= (loc>=limit?limit:loc);
if(l>buffer){
for(k= buffer;k<l;k++)
if( *k=='\t')putchar(' ');
else putchar(xchr[ *k]);
putchar('\n');
for(k= buffer;k<l;k++)putchar(' ');
}
for(k= l;k<limit;k++)putchar(xchr[ *k]);
if( *limit==124)putchar('|');
putchar(' ');

/*:58*/
#line 949 "/Users/psaha/Git/rambutan/src/master/common.web"
;
}
fflush(stdout);history= 2;
}

/*:57*//*62:*/
#line 1009 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 40 "/Users/psaha/Git/rambutan/src/master/common.ch"
wrap_up(){
#line 1012 "/Users/psaha/Git/rambutan/src/master/common.web"
/*63:*/
#line 1017 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1018 "/Users/psaha/Git/rambutan/src/master/common.web"
switch(history){
#line 51 "/Users/psaha/Git/rambutan/src/master/common.ch"
case 1:
printf("(Did you see the warning message above?)\n");break;
case 2:
printf("(Pardon me, but I think I spotted something wrong.)\n");break;
case 3:printf("(That was a fatal error, my friend.)\n");
#line 1025 "/Users/psaha/Git/rambutan/src/master/common.web"
}

/*:63*/
#line 1012 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if(history>1)exit(1);
else exit(0);
}

/*:62*//*66:*/
#line 1060 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1061 "/Users/psaha/Git/rambutan/src/master/common.web"
scan_args()
{
char *dot_pos, *index();
boolean found_web= 0,found_change= 0;
no_xref= 0;
#line 61 "/Users/psaha/Git/rambutan/src/master/common.ch"
if(argc==2)
{if(strcmp(argv[1],"--version")==0)
{printf("This is %s from Rambutan version 1.33\n",argv[0]);
exit(0);
}
if(strcmp(argv[1],"--help")==0)
{printf("This program is part of Rambutan, ");
printf("a literate programming system for Java.\n");
exit(0);
}
}
while(--argc>0){
#line 1067 "/Users/psaha/Git/rambutan/src/master/common.web"
if( * *(++argv)!='-'){
if(!found_web)/*67:*/
#line 1084 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1085 "/Users/psaha/Git/rambutan/src/master/common.web"
{
if(strlen( *argv)>128
#line 306 "/Users/psaha/Git/rambutan/src/master/common.web"
-5)
/*73:*/
#line 1156 "/Users/psaha/Git/rambutan/src/master/common.web"
{printf("! Filename %s too long\n");err_print( *argv);history= 3;wrap_up();};
#line 1157 "/Users/psaha/Git/rambutan/src/master/common.web"

/*:73*/
#line 1087 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if((dot_pos= index( *argv,'.'))==NULL)
#line 78 "/Users/psaha/Git/rambutan/src/master/common.ch"
sprintf(file_name[0],"%s.w", *argv);
#line 1090 "/Users/psaha/Git/rambutan/src/master/common.web"
else{
sprintf(file_name[0],"%s", *argv);
/*68:*/
#line 1100 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1101 "/Users/psaha/Git/rambutan/src/master/common.web"
{char *p;
p= dot_pos;
while( *++p!='\0')
if( *p=='.')dot_pos= p;
}

/*:68*/
#line 1092 "/Users/psaha/Git/rambutan/src/master/common.web"

 *dot_pos= 0;
}
sprintf(tex_file_name,"%s.tex", *argv);
sprintf(C_file_name,"%s.%s", *argv,C_file_extension);
found_web= 1;
}

/*:67*/
#line 1069 "/Users/psaha/Git/rambutan/src/master/common.web"

else if(!found_change)/*69:*/
#line 1107 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1108 "/Users/psaha/Git/rambutan/src/master/common.web"
{
if(strlen( *argv)>128
#line 306 "/Users/psaha/Git/rambutan/src/master/common.web"
-5)
/*73:*/
#line 1156 "/Users/psaha/Git/rambutan/src/master/common.web"
{printf("! Filename %s too long\n");err_print( *argv);history= 3;wrap_up();};
#line 1157 "/Users/psaha/Git/rambutan/src/master/common.web"

/*:73*/
#line 1110 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if((dot_pos= index( *argv,'.'))==NULL)
sprintf(change_file_name,"%s.ch", *argv);
else sprintf(change_file_name,"%s", *argv);
found_change= 1;
}

/*:69*/
#line 1070 "/Users/psaha/Git/rambutan/src/master/common.web"

else/*72:*/
#line 1147 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1148 "/Users/psaha/Git/rambutan/src/master/common.web"
{
if(program==0)
#line 86 "/Users/psaha/Git/rambutan/src/master/common.ch"
{printf("! Usage: javatangle webfile[.w] [changefile[.ch]] [-Ipathname ...]\n");err_print(0);history= 3;wrap_up();}
else
{printf("! Usage: javaweave webfile[.w] [changefile[.ch]] [-x] [-Ipathname ...]\n");err_print(
#line 1153 "/Users/psaha/Git/rambutan/src/master/common.web"
0);history= 3;wrap_up();};
}

/*:72*/
#line 1071 "/Users/psaha/Git/rambutan/src/master/common.web"
;
}
else/*71:*/
#line 1132 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1133 "/Users/psaha/Git/rambutan/src/master/common.web"
{
switch(( *argv)[1]){
case'x':
no_xref= 1;
break;
case'I':
/*29:*/
#line 534 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 535 "/Users/psaha/Git/rambutan/src/master/common.web"
pathaddname( *argv+2);
/*:29*/
#line 1139 "/Users/psaha/Git/rambutan/src/master/common.web"

break;
default:
/*74:*/
#line 1158 "/Users/psaha/Git/rambutan/src/master/common.web"
{
#line 1159 "/Users/psaha/Git/rambutan/src/master/common.web"
printf("! Unknown option in argument %s\n", *argv);{if(history==0)history= 1;};
}

/*:74*/
#line 1142 "/Users/psaha/Git/rambutan/src/master/common.web"
;
break;
}
}

/*:71*/
#line 1073 "/Users/psaha/Git/rambutan/src/master/common.web"
;
}
if(!found_web)/*72:*/
#line 1147 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1148 "/Users/psaha/Git/rambutan/src/master/common.web"
{
if(program==0)
#line 86 "/Users/psaha/Git/rambutan/src/master/common.ch"
{printf("! Usage: javatangle webfile[.w] [changefile[.ch]] [-Ipathname ...]\n");err_print(0);history= 3;wrap_up();}
else
{printf("! Usage: javaweave webfile[.w] [changefile[.ch]] [-x] [-Ipathname ...]\n");err_print(
#line 1153 "/Users/psaha/Git/rambutan/src/master/common.web"
0);history= 3;wrap_up();};
}

/*:72*/
#line 1075 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if(!found_change)/*70:*/
#line 1117 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 1118 "/Users/psaha/Git/rambutan/src/master/common.web"
#ifdef MSDOS
strcpy(change_file_name,"NUL");
#else
strcpy(change_file_name,"/dev/null");
#endif
/*:70*/
#line 1076 "/Users/psaha/Git/rambutan/src/master/common.web"
;
}

/*:66*/
#line 59 "/Users/psaha/Git/rambutan/src/master/common.web"
;

/*:1*//*44:*/
#line 703 "/Users/psaha/Git/rambutan/src/master/common.web"
name_pointer
#line 704 "/Users/psaha/Git/rambutan/src/master/common.web"
 id_lookup(first,last,t)
ASCII *first;
ASCII *last;
eight_bits t;
{
ASCII *i= first;
int h;
int l;
name_pointer p;
if(last==NULL)for(last= first; *last!='\0';last++);
l= last-first;
/*45:*/
#line 725 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 726 "/Users/psaha/Git/rambutan/src/master/common.web"
h=  *i;while(++i<last)h= (h+h+ *i)%353;

/*:45*/
#line 715 "/Users/psaha/Git/rambutan/src/master/common.web"
;
/*46:*/
#line 731 "/Users/psaha/Git/rambutan/src/master/common.web"

#line 732 "/Users/psaha/Git/rambutan/src/master/common.web"
p= hash[h];
while(p&&!names_match(p,first,l,t))p= p->link;
if(p==NULL){
p= name_ptr;
p->link= hash[h];hash[h]= p;
}

/*:46*/
#line 716 "/Users/psaha/Git/rambutan/src/master/common.web"
;
if(p==name_ptr)/*47:*/
#line 743 "/Users/psaha/Git/rambutan/src/master/common.web"
{
#line 744 "/Users/psaha/Git/rambutan/src/master/common.web"
if(byte_ptr+l>byte_mem_end){{printf("\n! Sorry, capacity exceeded: ");err_print("byte memory");history= 3;wrap_up();};};
if(name_ptr>=name_dir_end){{printf("\n! Sorry, capacity exceeded: ");err_print("name");history= 3;wrap_up();};};
strncpy(byte_ptr,first,l);
(++name_ptr)->byte_start= byte_ptr+= l;
init_p(p,t);
}

/*:47*/
#line 717 "/Users/psaha/Git/rambutan/src/master/common.web"
;
return(p);
}

/*:44*//*51:*/
#line 795 "/Users/psaha/Git/rambutan/src/master/common.web"
name_pointer
mod_lookup(k,l)
ASCII *k;
ASCII *l;
{
short c= 2;
name_pointer p= name_dir->dummy.Rlink;
name_pointer q= name_dir;
while(p){
c= web_strcmp(k,l+1,p->byte_start,(p+1)->byte_start);
q= p;
switch(c){
case 0:p= p->link;continue;
case 2:p= p->dummy.Rlink;continue;
case 1:return p;
default:err_print("! Incompatible section names");return NULL;

}
}
return(install_node(q,c,k,l-k+1));
}

/*:51*//*52:*/
#line 820 "/Users/psaha/Git/rambutan/src/master/common.web"

web_strcmp(j,j1,k,k1)
ASCII *j;
ASCII *j1;
ASCII *k;
ASCII *k1;
{
while(k<k1&&j<j1&& *j== *k)k++,j++;
if(k==k1)if(j==j1)return 1;
else return 4;
else if(j==j1)return 3;
else if( *j< *k)return 0;
else return 2;
}

/*:52*//*53:*/
#line 843 "/Users/psaha/Git/rambutan/src/master/common.web"
name_pointer
#line 844 "/Users/psaha/Git/rambutan/src/master/common.web"
 install_node(parent,c,j,name_len)
name_pointer parent;
int c;
ASCII *j;
int name_len;
{
name_pointer node= name_ptr;
if(byte_ptr+name_len>byte_mem_end){{printf("\n! Sorry, capacity exceeded: ");err_print("byte memory");history= 3;wrap_up();};};
if(name_ptr==name_dir_end){{printf("\n! Sorry, capacity exceeded: ");err_print("name");history= 3;wrap_up();};};
if(c==0)parent->link= node;else parent->dummy.Rlink= node;
node->link= NULL;node->dummy.Rlink= NULL;
init_node(node);
strncpy(byte_ptr,j,name_len);
(++name_ptr)->byte_start= byte_ptr+= name_len;
return(node);
}

/*:53*//*54:*/
#line 867 "/Users/psaha/Git/rambutan/src/master/common.web"
name_pointer
#line 868 "/Users/psaha/Git/rambutan/src/master/common.web"
 prefix_lookup(k,l)
ASCII *k;
ASCII *l;
{
short c= 2;
short count= 0;
name_pointer p= name_dir->dummy.Rlink;
name_pointer q= NULL;

name_pointer r= NULL;
while(p){
c= web_strcmp(k,l+1,p->byte_start,(p+1)->byte_start);
switch(c){
case 0:p= p->link;break;
case 2:p= p->dummy.Rlink;break;
default:r= p;count++;q= p->dummy.Rlink;p= p->link;
}
if(p==NULL){
p= q;q= NULL;
}
}
if(count==0)err_print("! Name does not match");

if(count>1)err_print("! Ambiguous prefix");

return(r);
}

/*:54*/
