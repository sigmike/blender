/*
created with obj2opengl.pl

source file    : ui_cursor.obj
vertices       : 33
faces          : 56
normals        : 120
texture coords : 72


// include generated arrays
#import "ui_cursor.obj"

// set input data to arrays
glVertexPointer(3, GL_FLOAT, 0, ui_cursor_obj_verts);
glNormalPointer(GL_FLOAT, 0, ui_cursor_obj_nrmls);
glTexCoordPointer(2, GL_FLOAT, 0, ui_cursor_obj_uvs);

// draw data
glDrawArrays(GL_TRIANGLES, 0, ui_cursor_numverts);
*/

unsigned int ui_cursor_obj_numverts = 168;

float ui_cursor_obj_verts [] = {
  // f 1/1/1 2/2/2 10/3/3 9/4/4
  0.00367600f, -0.04744300f, -0.00367600f,
  0.00000000f, -0.04744300f, -0.00519900f,
  0.00000000f, -0.03000200f, -0.00519900f,
  // f 1/1/1 2/2/2 10/3/3 9/4/4
  0.00367600f, -0.04744300f, -0.00367600f,
  0.00367600f, -0.03000200f, -0.00367600f,
  0.00000000f, -0.03000200f, -0.00519900f,
  // f 2/5/5 3/6/6 11/7/7 10/8/8
  0.00000000f, -0.04744300f, -0.00519900f,
  -0.00367600f, -0.04744300f, -0.00367600f,
  -0.00367600f, -0.03000200f, -0.00367600f,
  // f 2/5/5 3/6/6 11/7/7 10/8/8
  0.00000000f, -0.04744300f, -0.00519900f,
  0.00000000f, -0.03000200f, -0.00519900f,
  -0.00367600f, -0.03000200f, -0.00367600f,
  // f 3/9/9 4/10/10 12/11/11 11/12/12
  -0.00367600f, -0.04744300f, -0.00367600f,
  -0.00519900f, -0.04744300f, 0.00000000f,
  -0.00519900f, -0.03000200f, 0.00000000f,
  // f 3/9/9 4/10/10 12/11/11 11/12/12
  -0.00367600f, -0.04744300f, -0.00367600f,
  -0.00367600f, -0.03000200f, -0.00367600f,
  -0.00519900f, -0.03000200f, 0.00000000f,
  // f 4/13/13 5/14/14 13/15/15 12/16/16
  -0.00519900f, -0.04744300f, 0.00000000f,
  -0.00367600f, -0.04744300f, 0.00367600f,
  -0.00367600f, -0.03000200f, 0.00367600f,
  // f 4/13/13 5/14/14 13/15/15 12/16/16
  -0.00519900f, -0.04744300f, 0.00000000f,
  -0.00519900f, -0.03000200f, 0.00000000f,
  -0.00367600f, -0.03000200f, 0.00367600f,
  // f 5/17/17 6/18/18 14/19/19 13/20/20
  -0.00367600f, -0.04744300f, 0.00367600f,
  0.00000000f, -0.04744300f, 0.00519900f,
  0.00000000f, -0.03000200f, 0.00519900f,
  // f 5/17/17 6/18/18 14/19/19 13/20/20
  -0.00367600f, -0.04744300f, 0.00367600f,
  -0.00367600f, -0.03000200f, 0.00367600f,
  0.00000000f, -0.03000200f, 0.00519900f,
  // f 6/21/21 7/22/22 15/23/23 14/24/24
  0.00000000f, -0.04744300f, 0.00519900f,
  0.00367600f, -0.04744300f, 0.00367600f,
  0.00367600f, -0.03000200f, 0.00367600f,
  // f 6/21/21 7/22/22 15/23/23 14/24/24
  0.00000000f, -0.04744300f, 0.00519900f,
  0.00000000f, -0.03000200f, 0.00519900f,
  0.00367600f, -0.03000200f, 0.00367600f,
  // f 7/25/25 8/26/26 16/27/27 15/28/28
  0.00367600f, -0.04744300f, 0.00367600f,
  0.00519900f, -0.04744300f, 0.00000000f,
  0.00519900f, -0.03000200f, 0.00000000f,
  // f 7/25/25 8/26/26 16/27/27 15/28/28
  0.00367600f, -0.04744300f, 0.00367600f,
  0.00367600f, -0.03000200f, 0.00367600f,
  0.00519900f, -0.03000200f, 0.00000000f,
  // f 8/29/29 1/30/30 9/31/31 16/32/32
  0.00519900f, -0.04744300f, 0.00000000f,
  0.00367600f, -0.04744300f, -0.00367600f,
  0.00367600f, -0.03000200f, -0.00367600f,
  // f 8/29/29 1/30/30 9/31/31 16/32/32
  0.00519900f, -0.04744300f, 0.00000000f,
  0.00519900f, -0.03000200f, 0.00000000f,
  0.00367600f, -0.03000200f, -0.00367600f,
  // f 2/2/33 1/1/34 17/33/35
  0.00000000f, -0.04744300f, -0.00519900f,
  0.00367600f, -0.04744300f, -0.00367600f,
  0.00000000f, -0.04421300f, 0.00000000f,
  // f 3/6/36 2/5/37 17/34/38
  -0.00367600f, -0.04744300f, -0.00367600f,
  0.00000000f, -0.04744300f, -0.00519900f,
  0.00000000f, -0.04421300f, 0.00000000f,
  // f 4/10/39 3/9/40 17/35/41
  -0.00519900f, -0.04744300f, 0.00000000f,
  -0.00367600f, -0.04744300f, -0.00367600f,
  0.00000000f, -0.04421300f, 0.00000000f,
  // f 5/14/42 4/13/43 17/36/44
  -0.00367600f, -0.04744300f, 0.00367600f,
  -0.00519900f, -0.04744300f, 0.00000000f,
  0.00000000f, -0.04421300f, 0.00000000f,
  // f 6/18/45 5/17/46 17/37/47
  0.00000000f, -0.04744300f, 0.00519900f,
  -0.00367600f, -0.04744300f, 0.00367600f,
  0.00000000f, -0.04421300f, 0.00000000f,
  // f 7/22/48 6/21/49 17/38/50
  0.00367600f, -0.04744300f, 0.00367600f,
  0.00000000f, -0.04744300f, 0.00519900f,
  0.00000000f, -0.04421300f, 0.00000000f,
  // f 8/26/51 7/25/52 17/39/53
  0.00519900f, -0.04744300f, 0.00000000f,
  0.00367600f, -0.04744300f, 0.00367600f,
  0.00000000f, -0.04421300f, 0.00000000f,
  // f 1/30/54 8/29/55 17/40/56
  0.00367600f, -0.04744300f, -0.00367600f,
  0.00519900f, -0.04744300f, 0.00000000f,
  0.00000000f, -0.04421300f, 0.00000000f,
  // f 9/4/57 10/3/58 19/41/59 18/42/60
  0.00367600f, -0.03000200f, -0.00367600f,
  0.00000000f, -0.03000200f, -0.00519900f,
  0.00000000f, -0.03144300f, -0.00942900f,
  // f 9/4/57 10/3/58 19/41/59 18/42/60
  0.00367600f, -0.03000200f, -0.00367600f,
  0.00666700f, -0.03144300f, -0.00666700f,
  0.00000000f, -0.03144300f, -0.00942900f,
  // f 10/8/61 11/7/62 20/43/63 19/44/64
  0.00000000f, -0.03000200f, -0.00519900f,
  -0.00367600f, -0.03000200f, -0.00367600f,
  -0.00666700f, -0.03144300f, -0.00666700f,
  // f 10/8/61 11/7/62 20/43/63 19/44/64
  0.00000000f, -0.03000200f, -0.00519900f,
  0.00000000f, -0.03144300f, -0.00942900f,
  -0.00666700f, -0.03144300f, -0.00666700f,
  // f 11/12/65 12/11/66 21/45/67 20/46/68
  -0.00367600f, -0.03000200f, -0.00367600f,
  -0.00519900f, -0.03000200f, 0.00000000f,
  -0.00942900f, -0.03144300f, 0.00000000f,
  // f 11/12/65 12/11/66 21/45/67 20/46/68
  -0.00367600f, -0.03000200f, -0.00367600f,
  -0.00666700f, -0.03144300f, -0.00666700f,
  -0.00942900f, -0.03144300f, 0.00000000f,
  // f 12/16/69 13/15/70 22/47/71 21/48/72
  -0.00519900f, -0.03000200f, 0.00000000f,
  -0.00367600f, -0.03000200f, 0.00367600f,
  -0.00666700f, -0.03144300f, 0.00666700f,
  // f 12/16/69 13/15/70 22/47/71 21/48/72
  -0.00519900f, -0.03000200f, 0.00000000f,
  -0.00942900f, -0.03144300f, 0.00000000f,
  -0.00666700f, -0.03144300f, 0.00666700f,
  // f 13/20/73 14/19/74 23/49/75 22/50/76
  -0.00367600f, -0.03000200f, 0.00367600f,
  0.00000000f, -0.03000200f, 0.00519900f,
  0.00000000f, -0.03144300f, 0.00942900f,
  // f 13/20/73 14/19/74 23/49/75 22/50/76
  -0.00367600f, -0.03000200f, 0.00367600f,
  -0.00666700f, -0.03144300f, 0.00666700f,
  0.00000000f, -0.03144300f, 0.00942900f,
  // f 14/24/77 15/23/78 24/51/79 23/52/80
  0.00000000f, -0.03000200f, 0.00519900f,
  0.00367600f, -0.03000200f, 0.00367600f,
  0.00666700f, -0.03144300f, 0.00666700f,
  // f 14/24/77 15/23/78 24/51/79 23/52/80
  0.00000000f, -0.03000200f, 0.00519900f,
  0.00000000f, -0.03144300f, 0.00942900f,
  0.00666700f, -0.03144300f, 0.00666700f,
  // f 15/28/81 16/27/82 25/53/83 24/54/84
  0.00367600f, -0.03000200f, 0.00367600f,
  0.00519900f, -0.03000200f, 0.00000000f,
  0.00942900f, -0.03144300f, 0.00000000f,
  // f 15/28/81 16/27/82 25/53/83 24/54/84
  0.00367600f, -0.03000200f, 0.00367600f,
  0.00666700f, -0.03144300f, 0.00666700f,
  0.00942900f, -0.03144300f, 0.00000000f,
  // f 16/32/85 9/31/86 18/55/87 25/56/88
  0.00519900f, -0.03000200f, 0.00000000f,
  0.00367600f, -0.03000200f, -0.00367600f,
  0.00666700f, -0.03144300f, -0.00666700f,
  // f 16/32/85 9/31/86 18/55/87 25/56/88
  0.00519900f, -0.03000200f, 0.00000000f,
  0.00942900f, -0.03144300f, 0.00000000f,
  0.00666700f, -0.03144300f, -0.00666700f,
  // f 18/55/89 27/57/90 33/58/91 25/56/92
  0.00666700f, -0.03144300f, -0.00666700f,
  0.00006200f, 0.00000000f, -0.00006200f,
  0.00008700f, 0.00000000f, 0.00000000f,
  // f 18/55/89 27/57/90 33/58/91 25/56/92
  0.00666700f, -0.03144300f, -0.00666700f,
  0.00942900f, -0.03144300f, 0.00000000f,
  0.00008700f, 0.00000000f, 0.00000000f,
  // f 19/41/93 26/59/94 27/60/95 18/42/96
  0.00000000f, -0.03144300f, -0.00942900f,
  0.00000000f, 0.00000000f, -0.00008700f,
  0.00006200f, 0.00000000f, -0.00006200f,
  // f 19/41/93 26/59/94 27/60/95 18/42/96
  0.00000000f, -0.03144300f, -0.00942900f,
  0.00666700f, -0.03144300f, -0.00666700f,
  0.00006200f, 0.00000000f, -0.00006200f,
  // f 20/43/97 28/61/98 26/62/99 19/44/100
  -0.00666700f, -0.03144300f, -0.00666700f,
  -0.00006200f, 0.00000000f, -0.00006200f,
  0.00000000f, 0.00000000f, -0.00008700f,
  // f 20/43/97 28/61/98 26/62/99 19/44/100
  -0.00666700f, -0.03144300f, -0.00666700f,
  0.00000000f, -0.03144300f, -0.00942900f,
  0.00000000f, 0.00000000f, -0.00008700f,
  // f 21/45/101 29/63/102 28/64/103 20/46/104
  -0.00942900f, -0.03144300f, 0.00000000f,
  -0.00008700f, 0.00000000f, 0.00000000f,
  -0.00006200f, 0.00000000f, -0.00006200f,
  // f 21/45/101 29/63/102 28/64/103 20/46/104
  -0.00942900f, -0.03144300f, 0.00000000f,
  -0.00666700f, -0.03144300f, -0.00666700f,
  -0.00006200f, 0.00000000f, -0.00006200f,
  // f 22/47/105 30/65/106 29/66/107 21/48/108
  -0.00666700f, -0.03144300f, 0.00666700f,
  -0.00006200f, 0.00000000f, 0.00006200f,
  -0.00008700f, 0.00000000f, 0.00000000f,
  // f 22/47/105 30/65/106 29/66/107 21/48/108
  -0.00666700f, -0.03144300f, 0.00666700f,
  -0.00942900f, -0.03144300f, 0.00000000f,
  -0.00008700f, 0.00000000f, 0.00000000f,
  // f 23/49/109 31/67/110 30/68/111 22/50/112
  0.00000000f, -0.03144300f, 0.00942900f,
  0.00000000f, 0.00000000f, 0.00008700f,
  -0.00006200f, 0.00000000f, 0.00006200f,
  // f 23/49/109 31/67/110 30/68/111 22/50/112
  0.00000000f, -0.03144300f, 0.00942900f,
  -0.00666700f, -0.03144300f, 0.00666700f,
  -0.00006200f, 0.00000000f, 0.00006200f,
  // f 24/51/113 32/69/114 31/70/115 23/52/116
  0.00666700f, -0.03144300f, 0.00666700f,
  0.00006200f, 0.00000000f, 0.00006200f,
  0.00000000f, 0.00000000f, 0.00008700f,
  // f 24/51/113 32/69/114 31/70/115 23/52/116
  0.00666700f, -0.03144300f, 0.00666700f,
  0.00000000f, -0.03144300f, 0.00942900f,
  0.00000000f, 0.00000000f, 0.00008700f,
  // f 25/53/117 33/71/118 32/72/119 24/54/120
  0.00942900f, -0.03144300f, 0.00000000f,
  0.00008700f, 0.00000000f, 0.00000000f,
  0.00006200f, 0.00000000f, 0.00006200f,
  // f 25/53/117 33/71/118 32/72/119 24/54/120
  0.00942900f, -0.03144300f, 0.00000000f,
  0.00666700f, -0.03144300f, 0.00666700f,
  0.00006200f, 0.00000000f, 0.00006200f,
};

float ui_cursor_obj_nrmls [] = {
  // f 1/1/1 2/2/2 10/3/3 9/4/4
  0.70710678f, 0.00000000f, -0.70710678f,
  0.00000000f, 0.00000000f, -1.00000000f,
  0.00000000f, 0.00000000f, -1.00000000f,
  // f 1/1/1 2/2/2 10/3/3 9/4/4
  0.70710678f, 0.00000000f, -0.70710678f,
  0.70710678f, 0.00000000f, -0.70710678f,
  0.00000000f, 0.00000000f, -1.00000000f,
  // f 2/5/5 3/6/6 11/7/7 10/8/8
  0.00000000f, 0.00000000f, -1.00000000f,
  -0.70710678f, 0.00000000f, -0.70710678f,
  -0.70710678f, 0.00000000f, -0.70710678f,
  // f 2/5/5 3/6/6 11/7/7 10/8/8
  0.00000000f, 0.00000000f, -1.00000000f,
  0.00000000f, 0.00000000f, -1.00000000f,
  -0.70710678f, 0.00000000f, -0.70710678f,
  // f 3/9/9 4/10/10 12/11/11 11/12/12
  -0.70710678f, 0.00000000f, -0.70710678f,
  -1.00000000f, 0.00000000f, 0.00000000f,
  -1.00000000f, 0.00000000f, 0.00000000f,
  // f 3/9/9 4/10/10 12/11/11 11/12/12
  -0.70710678f, 0.00000000f, -0.70710678f,
  -0.70710678f, 0.00000000f, -0.70710678f,
  -1.00000000f, 0.00000000f, 0.00000000f,
  // f 4/13/13 5/14/14 13/15/15 12/16/16
  -1.00000000f, 0.00000000f, 0.00000000f,
  -0.70710678f, 0.00000000f, 0.70710678f,
  -0.70710678f, 0.00000000f, 0.70710678f,
  // f 4/13/13 5/14/14 13/15/15 12/16/16
  -1.00000000f, 0.00000000f, 0.00000000f,
  -1.00000000f, 0.00000000f, 0.00000000f,
  -0.70710678f, 0.00000000f, 0.70710678f,
  // f 5/17/17 6/18/18 14/19/19 13/20/20
  -0.70710678f, 0.00000000f, 0.70710678f,
  0.00000000f, 0.00000000f, 1.00000000f,
  0.00000000f, 0.00000000f, 1.00000000f,
  // f 5/17/17 6/18/18 14/19/19 13/20/20
  -0.70710678f, 0.00000000f, 0.70710678f,
  -0.70710678f, 0.00000000f, 0.70710678f,
  0.00000000f, 0.00000000f, 1.00000000f,
  // f 6/21/21 7/22/22 15/23/23 14/24/24
  0.00000000f, 0.00000000f, 1.00000000f,
  0.70710678f, 0.00000000f, 0.70710678f,
  0.70710678f, 0.00000000f, 0.70710678f,
  // f 6/21/21 7/22/22 15/23/23 14/24/24
  0.00000000f, 0.00000000f, 1.00000000f,
  0.00000000f, 0.00000000f, 1.00000000f,
  0.70710678f, 0.00000000f, 0.70710678f,
  // f 7/25/25 8/26/26 16/27/27 15/28/28
  0.70710678f, 0.00000000f, 0.70710678f,
  1.00000000f, 0.00000000f, 0.00000000f,
  1.00000000f, 0.00000000f, 0.00000000f,
  // f 7/25/25 8/26/26 16/27/27 15/28/28
  0.70710678f, 0.00000000f, 0.70710678f,
  0.70710678f, 0.00000000f, 0.70710678f,
  1.00000000f, 0.00000000f, 0.00000000f,
  // f 8/29/29 1/30/30 9/31/31 16/32/32
  1.00000000f, 0.00000000f, 0.00000000f,
  0.70710678f, 0.00000000f, -0.70710678f,
  0.70710678f, 0.00000000f, -0.70710678f,
  // f 8/29/29 1/30/30 9/31/31 16/32/32
  1.00000000f, 0.00000000f, 0.00000000f,
  1.00000000f, 0.00000000f, 0.00000000f,
  0.70710678f, 0.00000000f, -0.70710678f,
  // f 2/2/33 1/1/34 17/33/35
  0.00000000f, -0.84937800f, 0.52778500f,
  -0.37320110f, -0.84937823f, 0.37319910f,
  0.00000000f, -1.00000000f, 0.00000000f,
  // f 3/6/36 2/5/37 17/34/38
  0.37319996f, -0.84937791f, 0.37320096f,
  0.00000000f, -0.84937800f, 0.52778500f,
  0.00000000f, -1.00000000f, 0.00000000f,
  // f 4/10/39 3/9/40 17/35/41
  0.52778500f, -0.84937800f, 0.00000100f,
  0.37319996f, -0.84937791f, 0.37320096f,
  0.00000000f, -1.00000000f, 0.00000000f,
  // f 5/14/42 4/13/43 17/36/44
  0.37320010f, -0.84937823f, -0.37320010f,
  0.52778500f, -0.84937800f, 0.00000100f,
  0.00000000f, -1.00000000f, 0.00000000f,
  // f 6/18/45 5/17/46 17/37/47
  -0.00000000f, -0.84937800f, -0.52778500f,
  0.37320010f, -0.84937823f, -0.37320010f,
  0.00000000f, -1.00000000f, 0.00000000f,
  // f 7/22/48 6/21/49 17/38/50
  -0.37320010f, -0.84937823f, -0.37320010f,
  -0.00000000f, -0.84937800f, -0.52778500f,
  0.00000000f, -1.00000000f, 0.00000000f,
  // f 8/26/51 7/25/52 17/39/53
  -0.52778500f, -0.84937800f, -0.00000100f,
  -0.37320010f, -0.84937823f, -0.37320010f,
  0.00000000f, -1.00000000f, 0.00000000f,
  // f 1/30/54 8/29/55 17/40/56
  -0.37320110f, -0.84937823f, 0.37319910f,
  -0.52778500f, -0.84937800f, -0.00000100f,
  0.00000000f, -1.00000000f, 0.00000000f,
  // f 9/4/57 10/3/58 19/41/59 18/42/60
  -0.22800595f, -0.94658680f, 0.22800595f,
  0.00000000f, -0.94658686f, 0.32244895f,
  0.00000000f, -0.94658686f, 0.32244895f,
  // f 9/4/57 10/3/58 19/41/59 18/42/60
  -0.22800595f, -0.94658680f, 0.22800595f,
  -0.22800595f, -0.94658680f, 0.22800595f,
  0.00000000f, -0.94658686f, 0.32244895f,
  // f 10/8/61 11/7/62 20/43/63 19/44/64
  0.00000000f, -0.94658686f, 0.32244895f,
  0.22800600f, -0.94658702f, 0.22800500f,
  0.22800600f, -0.94658702f, 0.22800500f,
  // f 10/8/61 11/7/62 20/43/63 19/44/64
  0.00000000f, -0.94658686f, 0.32244895f,
  0.00000000f, -0.94658686f, 0.32244895f,
  0.22800600f, -0.94658702f, 0.22800500f,
  // f 11/12/65 12/11/66 21/45/67 20/46/68
  0.22800600f, -0.94658702f, 0.22800500f,
  0.32244895f, -0.94658686f, 0.00000000f,
  0.32244895f, -0.94658686f, 0.00000000f,
  // f 11/12/65 12/11/66 21/45/67 20/46/68
  0.22800600f, -0.94658702f, 0.22800500f,
  0.22800600f, -0.94658702f, 0.22800500f,
  0.32244895f, -0.94658686f, 0.00000000f,
  // f 12/16/69 13/15/70 22/47/71 21/48/72
  0.32244895f, -0.94658686f, 0.00000000f,
  0.22800600f, -0.94658702f, -0.22800500f,
  0.22800600f, -0.94658702f, -0.22800500f,
  // f 12/16/69 13/15/70 22/47/71 21/48/72
  0.32244895f, -0.94658686f, 0.00000000f,
  0.32244895f, -0.94658686f, 0.00000000f,
  0.22800600f, -0.94658702f, -0.22800500f,
  // f 13/20/73 14/19/74 23/49/75 22/50/76
  0.22800600f, -0.94658702f, -0.22800500f,
  -0.00000000f, -0.94658686f, -0.32244895f,
  -0.00000000f, -0.94658686f, -0.32244895f,
  // f 13/20/73 14/19/74 23/49/75 22/50/76
  0.22800600f, -0.94658702f, -0.22800500f,
  0.22800600f, -0.94658702f, -0.22800500f,
  -0.00000000f, -0.94658686f, -0.32244895f,
  // f 14/24/77 15/23/78 24/51/79 23/52/80
  -0.00000000f, -0.94658686f, -0.32244895f,
  -0.22800595f, -0.94658680f, -0.22800595f,
  -0.22800595f, -0.94658680f, -0.22800595f,
  // f 14/24/77 15/23/78 24/51/79 23/52/80
  -0.00000000f, -0.94658686f, -0.32244895f,
  -0.00000000f, -0.94658686f, -0.32244895f,
  -0.22800595f, -0.94658680f, -0.22800595f,
  // f 15/28/81 16/27/82 25/53/83 24/54/84
  -0.22800595f, -0.94658680f, -0.22800595f,
  -0.32244895f, -0.94658686f, 0.00000000f,
  -0.32244895f, -0.94658686f, 0.00000000f,
  // f 15/28/81 16/27/82 25/53/83 24/54/84
  -0.22800595f, -0.94658680f, -0.22800595f,
  -0.22800595f, -0.94658680f, -0.22800595f,
  -0.32244895f, -0.94658686f, 0.00000000f,
  // f 16/32/85 9/31/86 18/55/87 25/56/88
  -0.32244895f, -0.94658686f, 0.00000000f,
  -0.22800595f, -0.94658680f, 0.22800595f,
  -0.22800595f, -0.94658680f, 0.22800595f,
  // f 16/32/85 9/31/86 18/55/87 25/56/88
  -0.32244895f, -0.94658686f, 0.00000000f,
  -0.32244895f, -0.94658686f, 0.00000000f,
  -0.22800595f, -0.94658680f, 0.22800595f,
  // f 18/55/89 27/57/90 33/58/91 25/56/92
  0.67782463f, 0.28479385f, -0.67782463f,
  0.67782463f, 0.28479385f, -0.67782463f,
  0.95858876f, 0.28479393f, 0.00000000f,
  // f 18/55/89 27/57/90 33/58/91 25/56/92
  0.67782463f, 0.28479385f, -0.67782463f,
  0.95858876f, 0.28479393f, 0.00000000f,
  0.95858876f, 0.28479393f, 0.00000000f,
  // f 19/41/93 26/59/94 27/60/95 18/42/96
  0.00000000f, 0.28479393f, -0.95858876f,
  0.00000000f, 0.28479393f, -0.95858876f,
  0.67782463f, 0.28479385f, -0.67782463f,
  // f 19/41/93 26/59/94 27/60/95 18/42/96
  0.00000000f, 0.28479393f, -0.95858876f,
  0.67782463f, 0.28479385f, -0.67782463f,
  0.67782463f, 0.28479385f, -0.67782463f,
  // f 20/43/97 28/61/98 26/62/99 19/44/100
  -0.67782463f, 0.28479385f, -0.67782463f,
  -0.67782463f, 0.28479385f, -0.67782463f,
  0.00000000f, 0.28479393f, -0.95858876f,
  // f 20/43/97 28/61/98 26/62/99 19/44/100
  -0.67782463f, 0.28479385f, -0.67782463f,
  0.00000000f, 0.28479393f, -0.95858876f,
  0.00000000f, 0.28479393f, -0.95858876f,
  // f 21/45/101 29/63/102 28/64/103 20/46/104
  -0.95858876f, 0.28479393f, 0.00000000f,
  -0.95858876f, 0.28479393f, 0.00000000f,
  -0.67782463f, 0.28479385f, -0.67782463f,
  // f 21/45/101 29/63/102 28/64/103 20/46/104
  -0.95858876f, 0.28479393f, 0.00000000f,
  -0.67782463f, 0.28479385f, -0.67782463f,
  -0.67782463f, 0.28479385f, -0.67782463f,
  // f 22/47/105 30/65/106 29/66/107 21/48/108
  -0.67782463f, 0.28479385f, 0.67782463f,
  -0.67782463f, 0.28479385f, 0.67782463f,
  -0.95858876f, 0.28479393f, 0.00000000f,
  // f 22/47/105 30/65/106 29/66/107 21/48/108
  -0.67782463f, 0.28479385f, 0.67782463f,
  -0.95858876f, 0.28479393f, 0.00000000f,
  -0.95858876f, 0.28479393f, 0.00000000f,
  // f 23/49/109 31/67/110 30/68/111 22/50/112
  0.00000000f, 0.28479393f, 0.95858876f,
  0.00000000f, 0.28479393f, 0.95858876f,
  -0.67782463f, 0.28479385f, 0.67782463f,
  // f 23/49/109 31/67/110 30/68/111 22/50/112
  0.00000000f, 0.28479393f, 0.95858876f,
  -0.67782463f, 0.28479385f, 0.67782463f,
  -0.67782463f, 0.28479385f, 0.67782463f,
  // f 24/51/113 32/69/114 31/70/115 23/52/116
  0.67782463f, 0.28479385f, 0.67782463f,
  0.67782463f, 0.28479385f, 0.67782463f,
  0.00000000f, 0.28479393f, 0.95858876f,
  // f 24/51/113 32/69/114 31/70/115 23/52/116
  0.67782463f, 0.28479385f, 0.67782463f,
  0.00000000f, 0.28479393f, 0.95858876f,
  0.00000000f, 0.28479393f, 0.95858876f,
  // f 25/53/117 33/71/118 32/72/119 24/54/120
  0.95858876f, 0.28479393f, 0.00000000f,
  0.95858876f, 0.28479393f, 0.00000000f,
  0.67782463f, 0.28479385f, 0.67782463f,
  // f 25/53/117 33/71/118 32/72/119 24/54/120
  0.95858876f, 0.28479393f, 0.00000000f,
  0.67782463f, 0.28479385f, 0.67782463f,
  0.67782463f, 0.28479385f, 0.67782463f,
};

float ui_cursor_obj_uvs [] = {
  // f 1/1/1 2/2/2 10/3/3 9/4/4
  0.03456600f, 0.93166700f,
  0.12049800f, 0.93232600f,
  0.12582300f, 0.60023300f,
  // f 1/1/1 2/2/2 10/3/3 9/4/4
  0.03456600f, 0.93166700f,
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  // f 2/5/5 3/6/6 11/7/7 10/8/8
  0.03456600f, 0.93166700f,
  0.12049800f, 0.93232600f,
  0.12582300f, 0.60023300f,
  // f 2/5/5 3/6/6 11/7/7 10/8/8
  0.03456600f, 0.93166700f,
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  // f 3/9/9 4/10/10 12/11/11 11/12/12
  0.03456600f, 0.93166700f,
  0.12049800f, 0.93232600f,
  0.12582300f, 0.60023300f,
  // f 3/9/9 4/10/10 12/11/11 11/12/12
  0.03456600f, 0.93166700f,
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  // f 4/13/13 5/14/14 13/15/15 12/16/16
  0.03456600f, 0.93166700f,
  0.12049800f, 0.93232600f,
  0.12582300f, 0.60023300f,
  // f 4/13/13 5/14/14 13/15/15 12/16/16
  0.03456600f, 0.93166700f,
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  // f 5/17/17 6/18/18 14/19/19 13/20/20
  0.03456600f, 0.93166700f,
  0.12049800f, 0.93232600f,
  0.12582300f, 0.60023300f,
  // f 5/17/17 6/18/18 14/19/19 13/20/20
  0.03456600f, 0.93166700f,
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  // f 6/21/21 7/22/22 15/23/23 14/24/24
  0.03456600f, 0.93166700f,
  0.12049800f, 0.93232600f,
  0.12582300f, 0.60023300f,
  // f 6/21/21 7/22/22 15/23/23 14/24/24
  0.03456600f, 0.93166700f,
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  // f 7/25/25 8/26/26 16/27/27 15/28/28
  0.03456600f, 0.93166700f,
  0.12049800f, 0.93232600f,
  0.12582300f, 0.60023300f,
  // f 7/25/25 8/26/26 16/27/27 15/28/28
  0.03456600f, 0.93166700f,
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  // f 8/29/29 1/30/30 9/31/31 16/32/32
  0.03456600f, 0.93166700f,
  0.12049800f, 0.93232600f,
  0.12582300f, 0.60023300f,
  // f 8/29/29 1/30/30 9/31/31 16/32/32
  0.03456600f, 0.93166700f,
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  // f 2/2/33 1/1/34 17/33/35
  0.12049800f, 0.93232600f,
  0.03456600f, 0.93166700f,
  0.07655200f, 0.97825100f,
  // f 3/6/36 2/5/37 17/34/38
  0.12049800f, 0.93232600f,
  0.03456600f, 0.93166700f,
  0.07655200f, 0.97825100f,
  // f 4/10/39 3/9/40 17/35/41
  0.12049800f, 0.93232600f,
  0.03456600f, 0.93166700f,
  0.07655200f, 0.97825100f,
  // f 5/14/42 4/13/43 17/36/44
  0.12049800f, 0.93232600f,
  0.03456600f, 0.93166700f,
  0.07655200f, 0.97825100f,
  // f 6/18/45 5/17/46 17/37/47
  0.12049800f, 0.93232600f,
  0.03456600f, 0.93166700f,
  0.07655200f, 0.97825100f,
  // f 7/22/48 6/21/49 17/38/50
  0.12049800f, 0.93232600f,
  0.03456600f, 0.93166700f,
  0.07655200f, 0.97825100f,
  // f 8/26/51 7/25/52 17/39/53
  0.12049800f, 0.93232600f,
  0.03456600f, 0.93166700f,
  0.07655200f, 0.97825100f,
  // f 1/30/54 8/29/55 17/40/56
  0.12049800f, 0.93232600f,
  0.03456600f, 0.93166700f,
  0.07655200f, 0.97825100f,
  // f 9/4/57 10/3/58 19/41/59 18/42/60
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  0.14929200f, 0.56603100f,
  // f 9/4/57 10/3/58 19/41/59 18/42/60
  0.04036600f, 0.59898000f,
  0.02018400f, 0.56424400f,
  0.14929200f, 0.56603100f,
  // f 10/8/61 11/7/62 20/43/63 19/44/64
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  0.14929200f, 0.56603100f,
  // f 10/8/61 11/7/62 20/43/63 19/44/64
  0.04036600f, 0.59898000f,
  0.02018400f, 0.56424400f,
  0.14929200f, 0.56603100f,
  // f 11/12/65 12/11/66 21/45/67 20/46/68
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  0.14929200f, 0.56603100f,
  // f 11/12/65 12/11/66 21/45/67 20/46/68
  0.04036600f, 0.59898000f,
  0.02018400f, 0.56424400f,
  0.14929200f, 0.56603100f,
  // f 12/16/69 13/15/70 22/47/71 21/48/72
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  0.14929200f, 0.56603100f,
  // f 12/16/69 13/15/70 22/47/71 21/48/72
  0.04036600f, 0.59898000f,
  0.02018400f, 0.56424400f,
  0.14929200f, 0.56603100f,
  // f 13/20/73 14/19/74 23/49/75 22/50/76
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  0.14929200f, 0.56603100f,
  // f 13/20/73 14/19/74 23/49/75 22/50/76
  0.04036600f, 0.59898000f,
  0.02018400f, 0.56424400f,
  0.14929200f, 0.56603100f,
  // f 14/24/77 15/23/78 24/51/79 23/52/80
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  0.14929200f, 0.56603100f,
  // f 14/24/77 15/23/78 24/51/79 23/52/80
  0.04036600f, 0.59898000f,
  0.02018400f, 0.56424400f,
  0.14929200f, 0.56603100f,
  // f 15/28/81 16/27/82 25/53/83 24/54/84
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  0.14929200f, 0.56603100f,
  // f 15/28/81 16/27/82 25/53/83 24/54/84
  0.04036600f, 0.59898000f,
  0.02018400f, 0.56424400f,
  0.14929200f, 0.56603100f,
  // f 16/32/85 9/31/86 18/55/87 25/56/88
  0.04036600f, 0.59898000f,
  0.12582300f, 0.60023300f,
  0.14929200f, 0.56603100f,
  // f 16/32/85 9/31/86 18/55/87 25/56/88
  0.04036600f, 0.59898000f,
  0.02018400f, 0.56424400f,
  0.14929200f, 0.56603100f,
  // f 18/55/89 27/57/90 33/58/91 25/56/92
  0.14929200f, 0.56603100f,
  0.09225700f, 0.00963800f,
  0.07313000f, 0.00937300f,
  // f 18/55/89 27/57/90 33/58/91 25/56/92
  0.14929200f, 0.56603100f,
  0.02018400f, 0.56424400f,
  0.07313000f, 0.00937300f,
  // f 19/41/93 26/59/94 27/60/95 18/42/96
  0.14929200f, 0.56603100f,
  0.09225700f, 0.00963800f,
  0.07313000f, 0.00937300f,
  // f 19/41/93 26/59/94 27/60/95 18/42/96
  0.14929200f, 0.56603100f,
  0.02018400f, 0.56424400f,
  0.07313000f, 0.00937300f,
  // f 20/43/97 28/61/98 26/62/99 19/44/100
  0.14929200f, 0.56603100f,
  0.09225700f, 0.00963800f,
  0.07313000f, 0.00937300f,
  // f 20/43/97 28/61/98 26/62/99 19/44/100
  0.14929200f, 0.56603100f,
  0.02018400f, 0.56424400f,
  0.07313000f, 0.00937300f,
  // f 21/45/101 29/63/102 28/64/103 20/46/104
  0.14929200f, 0.56603100f,
  0.09225700f, 0.00963800f,
  0.07313000f, 0.00937300f,
  // f 21/45/101 29/63/102 28/64/103 20/46/104
  0.14929200f, 0.56603100f,
  0.02018400f, 0.56424400f,
  0.07313000f, 0.00937300f,
  // f 22/47/105 30/65/106 29/66/107 21/48/108
  0.14929200f, 0.56603100f,
  0.09225700f, 0.00963800f,
  0.07313000f, 0.00937300f,
  // f 22/47/105 30/65/106 29/66/107 21/48/108
  0.14929200f, 0.56603100f,
  0.02018400f, 0.56424400f,
  0.07313000f, 0.00937300f,
  // f 23/49/109 31/67/110 30/68/111 22/50/112
  0.14929200f, 0.56603100f,
  0.09225700f, 0.00963800f,
  0.07313000f, 0.00937300f,
  // f 23/49/109 31/67/110 30/68/111 22/50/112
  0.14929200f, 0.56603100f,
  0.02018400f, 0.56424400f,
  0.07313000f, 0.00937300f,
  // f 24/51/113 32/69/114 31/70/115 23/52/116
  0.14929200f, 0.56603100f,
  0.09225700f, 0.00963800f,
  0.07313000f, 0.00937300f,
  // f 24/51/113 32/69/114 31/70/115 23/52/116
  0.14929200f, 0.56603100f,
  0.02018400f, 0.56424400f,
  0.07313000f, 0.00937300f,
  // f 25/53/117 33/71/118 32/72/119 24/54/120
  0.14929200f, 0.56603100f,
  0.09225700f, 0.00963800f,
  0.07313000f, 0.00937300f,
  // f 25/53/117 33/71/118 32/72/119 24/54/120
  0.14929200f, 0.56603100f,
  0.02018400f, 0.56424400f,
  0.07313000f, 0.00937300f,
};

