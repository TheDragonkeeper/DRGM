#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -f RUN.sh 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[3]))
	"\173\021\306\233\356\121\044\035\373\017\235\277\071\330\116\326"
	"\307\056\370\117\366\045\375\217\211\043"
#define      date_z	1
#define      date	((&data[26]))
	"\342"
#define      chk1_z	22
#define      chk1	((&data[28]))
	"\370\073\373\045\057\354\265\145\034\113\332\216\367\340\211\114"
	"\224\342\307\141\046\334\204\017"
#define      msg2_z	19
#define      msg2	((&data[51]))
	"\233\034\013\237\306\342\253\051\120\230\037\013\030\110\015\357"
	"\044\274\004\111\301"
#define      lsto_z	1
#define      lsto	((&data[72]))
	"\311"
#define      rlax_z	1
#define      rlax	((&data[73]))
	"\222"
#define      pswd_z	256
#define      pswd	((&data[124]))
	"\312\232\160\333\140\155\153\352\221\224\307\236\041\371\315\031"
	"\010\163\102\164\275\003\350\315\051\161\140\045\171\045\032\103"
	"\277\212\037\037\370\212\011\212\037\321\051\100\312\366\132\322"
	"\152\234\045\067\106\232\210\257\220\253\115\273\265\136\001\356"
	"\376\365\360\172\116\003\066\225\351\173\200\146\376\125\161\064"
	"\100\226\153\206\061\364\065\301\240\203\174\125\341\176\103\340"
	"\163\063\133\302\067\221\130\040\015\330\207\014\055\371\101\155"
	"\220\255\364\301\241\051\203\102\255\000\227\217\176\333\157\362"
	"\016\312\264\106\134\014\147\152\345\357\166\022\350\267\200\170"
	"\144\165\072\006\236\275\111\114\275\340\333\074\274\113\056\312"
	"\026\343\021\162\360\170\335\325\150\123\350\120\013\151\311\160"
	"\336\004\167\175\301\300\311\177\241\244\273\135\360\352\050\006"
	"\315\071\171\276\262\126\223\032\251\174\153\265\345\064\045\303"
	"\070\235\100\372\135\012\171\376\257\065\133\237\040\203\245\356"
	"\275\036\254\157\164\100\212\036\274\365\324\241\052\371\145\143"
	"\226\246\135\364\260\327\362\137\015\116\377\055\322\244\034\220"
	"\303\310\377\067\011\212\126\305\177\052\146\251\044\314\015\273"
	"\162\152\257\042\102\242\202\117\361\201\175\303\046\231\123\351"
	"\142\123\041\153\335\170\061\135\242\230\007\307\144\024\202\326"
	"\177\062\107\047\240\060\364\311\241\124\356\033\172\010\137\071"
	"\223\177\131\213\012\143\026\052\064\077\152\377\065\304\322\237"
	"\141\031\307\001\111\273\312\353\020\270\007\213\301\147\305\124"
	"\346\036\340\360\202\366\032\267\066\205\266\153\112\210\013\253"
#define      opts_z	1
#define      opts	((&data[442]))
	"\206"
#define      tst2_z	19
#define      tst2	((&data[445]))
	"\327\237\235\043\262\250\261\147\315\127\075\214\273\317\157\044"
	"\102\272\344\075\072\060\337"
#define      shll_z	10
#define      shll	((&data[468]))
	"\360\106\103\245\017\035\064\007\146\005\336\253"
#define      inlo_z	3
#define      inlo	((&data[478]))
	"\031\271\031"
#define      msg1_z	42
#define      msg1	((&data[487]))
	"\070\110\123\275\377\277\053\034\332\011\274\063\037\152\257\165"
	"\006\167\265\116\231\063\010\206\207\074\267\020\066\222\267\364"
	"\160\357\045\215\001\324\105\017\212\235\220\145\161\227\204\310"
	"\010"
#define      tst1_z	22
#define      tst1	((&data[534]))
	"\051\235\141\026\175\044\040\106\050\343\305\257\261\000\331\275"
	"\310\171\164\026\202\055\034\207\103\167\054\330\355\314"
#define      xecc_z	15
#define      xecc	((&data[563]))
	"\373\023\350\261\063\122\016\267\137\112\120\160\155\140\006\005"
	"\270\336\101\100\367"
#define      text_z	3814
#define      text	((&data[932]))
	"\204\226\321\330\123\321\227\133\130\142\017\202\000\160\230\055"
	"\111\206\371\122\124\361\115\147\332\217\250\322\366\007\133\173"
	"\235\055\124\361\376\353\115\127\115\135\332\116\315\163\173\027"
	"\372\165\152\116\147\270\266\101\107\136\024\075\146\157\271\003"
	"\235\015\364\234\371\102\363\107\237\316\225\155\102\021\204\074"
	"\206\356\212\356\247\100\057\356\237\104\054\005\264\345\011\121"
	"\363\376\356\354\100\342\063\337\260\311\114\362\332\320\056\140"
	"\277\271\116\146\372\176\124\231\303\201\237\167\146\250\311\132"
	"\246\267\107\346\231\172\306\112\104\022\074\036\343\153\177\242"
	"\045\316\011\037\115\136\271\020\337\130\207\106\001\121\240\247"
	"\010\347\216\242\142\124\354\246\147\051\304\112\224\104\354\272"
	"\022\366\331\137\124\222\160\063\353\370\171\354\111\032\224\122"
	"\001\042\364\143\167\340\012\336\011\317\050\236\023\025\130\045"
	"\014\062\205\140\304\366\223\257\356\015\233\070\047\057\212\051"
	"\122\176\214\311\137\227\250\150\146\321\007\171\347\137\237\363"
	"\221\045\123\126\033\347\006\012\365\241\103\034\321\316\105\044"
	"\114\322\356\254\152\226\025\320\150\034\111\117\174\351\102\016"
	"\016\225\145\052\175\153\065\162\015\171\217\336\107\325\002\224"
	"\250\361\100\022\207\125\342\357\162\054\077\357\025\201\375\044"
	"\027\142\117\224\316\205\007\333\376\226\271\105\153\274\331\023"
	"\255\032\046\065\157\010\045\342\065\144\321\113\346\317\157\375"
	"\061\277\222\377\104\232\332\102\060\224\210\234\121\141\260\104"
	"\370\327\300\163\240\103\163\070\235\111\042\261\046\116\155\221"
	"\366\141\024\301\353\146\052\004\371\225\263\020\251\232\115\370"
	"\356\372\202\055\155\312\116\302\137\145\261\110\070\302\155\021"
	"\076\213\235\155\025\211\363\004\360\310\241\131\361\264\007\300"
	"\221\177\057\100\266\105\272\226\056\222\271\316\175\231\066\317"
	"\256\253\267\176\150\105\144\024\213\272\131\000\124\377\046\357"
	"\210\350\305\047\276\127\313\117\270\353\371\156\261\103\042\036"
	"\177\351\206\125\205\145\324\276\000\070\170\122\135\344\330\131"
	"\011\072\326\306\333\001\153\350\074\265\353\041\333\216\335\005"
	"\045\222\342\127\040\234\336\104\046\036\244\015\252\232\223\005"
	"\125\074\376\061\321\015\215\260\073\321\155\113\374\102\330\345"
	"\311\100\235\213\270\177\161\276\266\112\231\370\166\165\350\050"
	"\245\266\261\006\220\144\214\272\305\023\111\266\177\333\071\126"
	"\241\105\142\301\367\023\364\144\375\312\363\143\103\336\376\200"
	"\257\302\167\347\343\300\036\335\205\275\036\052\100\043\072\320"
	"\307\250\370\325\333\103\123\130\262\107\202\222\111\347\133\030"
	"\147\325\223\036\341\317\207\305\321\233\054\166\316\323\164\177"
	"\331\017\240\300\302\116\274\221\256\326\107\013\337\362\361\012"
	"\125\236\222\151\340\101\301\251\265\137\015\074\060\316\074\052"
	"\320\021\272\073\326\046\335\076\360\030\055\110\024\354\036\066"
	"\213\371\232\200\011\135\302\104\121\157\014\355\034\000\071\005"
	"\261\163\053\060\114\364\101\245\312\161\051\174\055\303\117\302"
	"\231\164\246\021\315\316\150\223\222\140\060\175\210\167\356\173"
	"\061\000\302\100\015\103\102\134\062\006\001\002\056\177\100\121"
	"\050\352\354\314\027\200\154\027\103\154\234\030\116\357\125\270"
	"\340\166\260\302\176\240\357\304\077\356\001\002\113\144\005\022"
	"\372\354\037\172\306\045\370\073\025\210\017\052\315\176\307\037"
	"\265\050\326\376\134\175\243\335\372\262\331\121\323\347\032\067"
	"\301\072\173\177\376\000\044\010\232\355\161\071\262\357\324\334"
	"\206\234\332\251\177\213\025\012\321\363\020\075\203\001\362\367"
	"\021\354\361\112\265\236\047\007\224\256\205\165\332\076\264\223"
	"\226\240\261\265\355\104\004\057\252\021\201\056\005\170\306\273"
	"\261\235\211\361\165\144\306\107\104\100\355\074\106\265\173\343"
	"\376\363\174\001\217\322\067\214\060\335\144\317\314\106\012\072"
	"\272\153\050\111\047\137\144\076\016\254\373\302\134\351\305\347"
	"\311\011\063\346\231\221\100\254\265\374\276\071\025\033\070\171"
	"\223\343\006\122\277\174\152\250\015\057\232\231\077\116\075\040"
	"\377\257\126\311\215\336\130\251\320\225\340\336\003\035\261\122"
	"\162\321\355\367\341\127\003\104\273\375\120\067\327\224\215\113"
	"\250\250\010\307\271\363\266\217\216\326\155\363\025\100\344\011"
	"\141\105\017\071\167\155\203\246\253\034\014\106\047\022\301\060"
	"\271\370\202\067\324\272\330\261\323\364\077\122\220\115\323\160"
	"\350\276\114\113\147\224\371\011\115\067\103\240\373\376\201\170"
	"\022\357\153\100\115\044\111\323\365\247\302\315\120\156\037\217"
	"\114\241\374\354\330\125\303\255\142\343\240\143\316\260\140\124"
	"\274\375\177\036\251\245\357\365\163\027\232\203\101\254\106\065"
	"\266\330\103\150\062\170\061\103\023\005\136\310\350\104\251\360"
	"\140\003\054\360\252\037\046\225\227\355\007\065\037\332\056\064"
	"\276\373\360\033\267\126\355\126\143\045\205\153\054\030\334\000"
	"\002\233\125\130\020\234\347\146\316\033\027\350\143\346\015\300"
	"\226\304\275\263\161\027\151\063\007\366\233\131\210\043\225\145"
	"\150\245\263\366\266\214\157\175\037\251\126\340\031\360\071\276"
	"\266\117\354\377\075\053\160\303\046\175\233\361\205\062\254\330"
	"\215\147\017\004\147\047\055\165\155\164\000\032\203\070\002\007"
	"\112\001\103\002\341\330\352\067\164\372\174\360\130\005\257\103"
	"\073\234\346\301\163\137\024\054\207\300\312\334\035\274\321\127"
	"\202\222\233\057\035\110\271\150\025\053\044\254\356\220\121\044"
	"\350\303\300\122\026\316\130\237\351\165\134\233\272\277\006\307"
	"\006\335\007\054\017\267\022\356\310\334\340\045\341\110\367\203"
	"\331\355\361\375\016\154\236\130\021\244\314\344\323\132\367\106"
	"\261\151\364\105\161\063\313\071\324\004\234\141\137\270\334\025"
	"\356\264\023\002\274\376\351\133\113\033\143\001\051\304\373\236"
	"\025\066\142\051\142\373\007\121\210\100\042\343\135\105\205\200"
	"\065\147\370\306\173\303\362\332\106\172\212\127\104\114\044\030"
	"\212\243\163\024\356\222\042\316\253\322\211\140\104\270\315\240"
	"\334\270\300\026\211\346\235\376\032\276\226\147\055\344\121\151"
	"\372\214\331\324\113\214\045\357\336\076\017\061\044\362\107\246"
	"\223\211\133\243\067\141\274\126\221\307\304\017\157\132\205\365"
	"\020\176\004\134\157\226\375\071\223\371\364\271\275\377\071\250"
	"\014\156\032\373\107\205\355\146\075\351\227\002\037\250\330\071"
	"\102\047\035\207\214\273\321\300\270\023\064\173\046\233\212\005"
	"\203\174\047\370\232\235\374\104\260\206\277\232\162\037\062\363"
	"\064\117\320\042\255\041\007\045\350\204\020\071\316\364\157\251"
	"\000\134\340\307\045\371\355\123\046\152\153\026\020\265\074\363"
	"\206\300\377\320\311\044\040\136\263\024\346\034\263\247\313\255"
	"\020\375\317\330\201\116\231\265\051\222\235\010\100\011\177\335"
	"\107\327\206\247\246\357\317\131\330\014\107\057\254\245\033\051"
	"\362\144\016\355\205\022\320\142\232\234\243\364\170\302\100\064"
	"\105\056\037\242\170\330\066\300\271\167\170\102\235\312\116\131"
	"\033\136\236\122\052\065\363\104\056\202\237\057\221\276\263\010"
	"\004\212\337\147\070\101\000\210\274\001\036\204\167\023\034\324"
	"\157\133\171\210\047\134\354\173\117\320\276\042\377\102\175\026"
	"\151\075\144\151\053\311\322\364\335\151\052\100\223\235\244\043"
	"\314\303\334\040\266\230\106\344\306\172\231\262\233\045\075\372"
	"\131\033\224\001\171\354\112\055\235\070\064\101\310\266\131\053"
	"\114\103\146\013\217\362\263\147\350\054\254\047\252\264\364\124"
	"\341\001\172\140\043\044\025\110\110\225\077\102\236\301\016\005"
	"\116\236\220\361\161\172\202\034\235\174\122\360\061\314\024\235"
	"\222\352\133\240\123\277\142\325\177\160\130\160\202\204\254\052"
	"\207\215\064\116\333\147\277\175\276\256\345\103\004\303\121\357"
	"\044\134\257\360\362\270\245\152\272\226\154\205\037\127\325\144"
	"\113\132\340\131\266\024\331\155\244\231\203\332\333\376\062\051"
	"\242\352\240\260\060\121\244\276\153\143\374\307\346\175\030\244"
	"\353\154\366\260\351\274\032\100\155\336\164\026\032\267\333\265"
	"\251\233\330\271\034\027\264\236\252\126\177\276\251\123\010\270"
	"\167\247\377\055\203\121\137\070\276\125\207\333\062\265\010\302"
	"\154\170\030\315\147\044\312\246\301\112\171\175\207\155\127\243"
	"\131\001\046\044\360\133\370\031\304\344\107\256\124\331\007\067"
	"\031\230\057\251\274\361\023\165\107\271\167\077\011\176\361\202"
	"\250\225\312\235\007\330\166\056\157\017\306\042\321\210\370\230"
	"\112\144\076\322\213\122\132\047\146\336\362\062\247\140\046\314"
	"\057\023\145\150\264\030\205\337\163\061\037\314\015\253\037\322"
	"\350\000\106\073\063\160\365\275\113\335\326\350\030\152\052\314"
	"\115\063\320\057\151\377\373\105\206\106\363\220\230\152\114\252"
	"\224\170\364\005\165\244\160\024\165\020\037\013\241\223\343\224"
	"\351\203\214\374\034\046\037\254\274\071\300\375\077\042\007\375"
	"\320\230\200\035\366\226\131\170\027\003\040\103\206\256\057\003"
	"\337\211\076\247\067\002\110\227\330\117\102\125\014\112\244\266"
	"\374\315\023\162\111\070\345\325\231\303\204\024\374\020\022\131"
	"\333\005\056\061\343\170\165\125\246\333\152\052\061\254\264\275"
	"\215\267\131\255\235\132\105\100\065\245\357\114\235\034\161\220"
	"\214\062\002\067\122\174\263\115\011\254\172\202\137\221\237\231"
	"\273\241\016\144\344\345\206\070\166\101\132\056\166\047\107\371"
	"\344\364\154\267\230\220\246\141\043\104\006\025\010\043\114\340"
	"\232\107\353\156\275\262\300\335\027\062\101\337\266\251\077\027"
	"\362\103\001\243\231\226\202\231\056\263\177\300\064\003\112\240"
	"\272\254\210\223\132\214\167\105\303\011\367\212\300\175\330\116"
	"\227\260\163\253\162\325\325\042\356\247\357\252\062\160\362\101"
	"\255\146\300\375\154\211\031\257\276\142\301\371\214\034\051\132"
	"\053\035\254\011\030\345\131\022\272\221\304\061\246\375\140\242"
	"\144\121\177\341\340\116\267\357\003\254\372\002\260\150\067\272"
	"\274\020\223\007\323\165\352\072\130\160\231\007\020\101\170\332"
	"\320\020\212\252\344\320\147\146\206\144\327\160\141\315\116\300"
	"\131\226\122\145\153\140\222\312\030\017\054\117\056\202\350\277"
	"\000\261\341\144\363\361\114\253\150\162\202\021\347\104\072\344"
	"\016\105\151\365\110\356\334\177\112\165\346\132\074\340\145\160"
	"\315\061\202\012\151\137\347\301\165\043\003\052\330\165\156\106"
	"\331\203\226\232\043\212\356\151\053\021\031\244\173\243\047\266"
	"\051\253\060\320\244\330\226\111\204\205\235\267\036\314\215\121"
	"\052\166\067\344\227\264\355\277\001\171\164\003\215\372\206\364"
	"\300\324\337\040\374\245\236\277\143\224\310\363\176\143\336\103"
	"\310\171\160\203\212\172\230\317\014\360\257\041\007\166\051\006"
	"\143\364\035\257\251\031\026\074\251\213\244\005\225\377\144\157"
	"\246\155\233\212\163\367\304\315\233\016\014\005\371\012\202\076"
	"\332\073\374\275\031\037\140\021\336\343\012\320\046\213\005\024"
	"\201\365\055\144\143\356\363\330\107\023\076\121\015\027\045\321"
	"\201\275\333\071\346\012\260\142\021\137\002\366\004\151\011\375"
	"\134\275\023\261\102\323\125\133\123\117\224\351\143\143\223\250"
	"\027\210\051\257\362\011\325\054\023\317\124\162\160\272\247\103"
	"\231\377\270\320\140\066\023\335\263\235\030\020\255\270\317\342"
	"\356\270\272\270\223\017\343\077\377\042\107\272\265\217\071\234"
	"\311\267\375\150\014\060\066\344\033\035\144\217\114\346\246\166"
	"\032\146\057\230\155\134\221\242\364\011\326\235\372\024\346\240"
	"\023\330\131\121\211\224\151\111\065\160\134\207\110\311\131\230"
	"\341\304\325\353\345\274\253\315\331\263\360\370\201\273\240\111"
	"\331\251\050\123\214\324\142\260\305\077\150\036\321\167\276\261"
	"\023\002\154\234\121\221\017\310\372\046\370\100\170\213\307\112"
	"\024\037\306\152\020\303\062\362\042\256\106\005\047\320\213\273"
	"\207\051\161\175\216\364\232\215\253\004\051\245\010\146\041\007"
	"\110\142\364\341\325\051\342\315\374\142\134\063\015\136\102\357"
	"\210\022\112\223\150\167\276\017\041\113\363\252\156\124\324\004"
	"\243\031\225\001\063\205\373\141\256\367\272\245\150\132\353\346"
	"\306\037\123\212\353\013\230\221\116\217\111\106\375\155\216\311"
	"\167\147\373\307\322\104\216\274\174\073\351\240\267\315\016\050"
	"\343\175\152\164\104\375\163\175\043\000\357\256\261\127\266\160"
	"\075\135\000\146\212\064\026\267\313\100\274\004\062\207\062\316"
	"\307\167\071\014\074\217\125\164\057\252\145\211\166\026\371\360"
	"\242\236\102\123\217\200\051\372\067\270\256\376\236\265\171\054"
	"\066\276\337\373\071\345\007\053\027\346\250\265\212\071\161\016"
	"\137\135\375\071\342\015\276\236\222\136\261\052\046\122\152\206"
	"\021\206\165\312\006\322\243\225\177\066\005\351\234\072\116\247"
	"\110\113\320\105\316\371\260\072\136\301\331\306\120\177\027\144"
	"\002\141\131\014\143\103\247\177\256\333\175\164\313\217\115\151"
	"\355\131\140\332\371\212\330\331\270\327\062\373\263\252\356\110"
	"\111\130\362\112\304\255\201\125\150\036\346\163\120\351\370\033"
	"\175\200\176\235\247\062\021\045\313\214\350\373\327\131\315\222"
	"\347\260\035\132\104\311\054\112\353\100\255\200\301\134\366\253"
	"\115\131\007\034\212\211\305\221\120\157\115\153\006\276\007\332"
	"\022\026\306\240\051\030\327\166\364\140\124\163\324\334\020\143"
	"\163\070\326\377\300\306\055\377\160\242\023\172\201\120\344\054"
	"\004\317\306\041\375\100\135\020\123\052\106\156\237\061\121\333"
	"\375\223\102\232\140\064\203\174\354\046\316\216\135\252\104\317"
	"\042\221\316\165\247\272\303\254\367\147\137\060\021\262\375\006"
	"\012\112\331\005\207\153\026\210\106\376\177\307\325\126\147\074"
	"\276\274\210\233\053\154\306\164\056\004\246\061\347\222\003\125"
	"\270\114\336\047\131\226\230\043\022\254\315\100\320\064\104\133"
	"\320\023\320\364\050\240\170\054\301\022\305\333\142\150\111\127"
	"\051\321\124\046\203\236\374\247\274\005\134\325\043\110\152\005"
	"\307\376\204\233\304\264\330\345\214\070\057\154\112\320\305\135"
	"\123\071\203\332\373\255\121\110\235\247\315\300\145\303\261\106"
	"\152\341\044\203\234\235\151\313\174\114\014\260\313\154\356\102"
	"\352\215\153\266\241\132\303\252\367\162\007\371\356\240\237\256"
	"\135\112\034\106\101\333\211\151\102\130\262\207\121\265\350\060"
	"\065\332\206\161\214\023\012\371\372\240\210\372\353\203\204\317"
	"\337\101\260\006\316\330\113\011\341\376\347\152\224\134\216\073"
	"\235\221\141\143\242\206\002\032\253\317\364\253\220\362\026\004"
	"\052\303\250\012\324\061\121\067\020\150\351\053\172\043\153\326"
	"\273\350\012\321\324\302\245\254\017\000\225\054\043\115\115\137"
	"\040\343\166\360\017\234\167\171\066\030\332\111\146\122\256\177"
	"\057\331\316\274\023\103\174\106\171\100\277\140\170\011\255\245"
	"\135\032\151\015\326\004\324\120\242\223\123\345\020\176\321\215"
	"\137\034\070\026\245\172\305\144\014\274\275\367\010\064\307\053"
	"\135\242\162\237\162\060\355\060\331\153\316\373\220\364\371\064"
	"\211\224\257\265\010\136\211\171\330\072\333\152\314\300\016\321"
	"\053\300\114\045\313\231\364\112\337\210\300\305\100\270\141\243"
	"\156\233\331\241\034\335\035\317\271\144\347\017\245\312\156\160"
	"\246\326\365\072\006\237\206\375\155\233\060\120\354\251\336\261"
	"\355\122\151\316\276\235\225\174\153\226\247\323\302\166\147\110"
	"\302\331\101\171\161\331\334\077\376\255\273\257\353\172\265\167"
	"\364\337\261\264\123\164\122\332\243\306\155\156\177\356\076\145"
	"\302\111\330\213\216\177\370\155\036\321\160\323\363\303\372\340"
	"\054\007\310\304\034\140\154\155\123\365\320\134\253\045\314\156"
	"\127\173\006\360\357\260\124\271\160\016\104\072\022\125\252\062"
	"\157\353\367\304\065\164\377\356\325\106\057\103\156\137\117\344"
	"\066\067\070\034\366\115\330\310\030\343\236\125\366\314\021\262"
	"\131\224\124\243\260\251\325\037\316\363\243\135\110\110\027\372"
	"\335\132\355\213\065\325\356\065\312\146\124\162\357\233\264\025"
	"\077\014\162\351\047\104\220\272\253\105\174\117\266\114\147\140"
	"\266\070\340\260\155\067\255\155\065\172\314\045\371\114\106\113"
	"\156\121\024\123\216\033\370\072\020\136\025\346\133\014\240\232"
	"\104\336\324\033\311\130\041\014\346\052\270\150\033\214\200\040"
	"\076\356\140\367\302\336\302\335\313\152\153\016\206\206\331\145"
	"\075\065\122\273\046\273\251\004\075\353\363\147\157\115\275\326"
	"\216\050\036\065\037\151\233\030\165\201\110\112\065\221\363\305"
	"\241\274\326\003\367\323\166\341\135\025\224\133\205\035\361\034"
	"\156\334\102\217\345\257\304\014\000\246\012\275\356\243\003\071"
	"\302\312\173\325\225\105\326\212\171\355\267\122\355\164\341\063"
	"\213\125\221\157\356\024\002\217\075\271\117\161\227\102\212\305"
	"\054\122\142\242\025\341\130\257\105\014\302\314\024\303\004\227"
	"\145\307\372\341\167\377\023\016\204\277\314\056\035\314\007\320"
	"\110\230\350\055\120\050\357\027\216\276\150\234\012\170\316\276"
	"\310\010\023\112\024\037\331\373\045\354\316\035\072\327\012\376"
	"\351\216\000\202\173\220\022\354\200\057\245\121\043\302\166\042"
	"\201\227\176\360\143\260\043\207\151\017\101\034\022\013\147\301"
	"\111\147\010\310\342\200\302\001\054\031\074\230\351\134\362\313"
	"\231\017\277\054\120\067\004\364\132\331\363\213\077\221\230\130"
	"\212\155\020\365\174\214\052\004\046\366\143\317\120\305\172\323"
	"\266\317\022\307\116\306\042\161\075\141\201\263\141\257\226\300"
	"\216\324\245\344\206\276\360\206\241\277\130\056\375\216\370\152"
	"\232\001\331\231\020\104\264\121\030\050\115\052\174\351\355\313"
	"\057\312\311\360\037\062\001\236\372\066\353\062\365\236\205\065"
	"\264\010\160\360\170\146\111\133\310\364\066\011\153\031\152\062"
	"\274\353\202\076\067\154\060\211\210\303\044\361\356\023\340\350"
	"\240\054\232\112\252\177\105\213\156\203\120\254\302\360\123\304"
	"\276\213\374\353\006\070\170\064\271\374\314\161\015\014\101\161"
	"\037\145\041\046\163\006\263\234\120\021\371\320\053\074\241\023"
	"\117\373\067\000\300\231\136\246\253\032\332\261\310\107\027\016"
	"\214\317\030\123\066\302\304\135\216\111\243\267\245\354\355\217"
	"\154\303\357\130\221\377\173\326\064\353\337\132\315\024\277\237"
	"\140\245\156\320\243\240\217\066\240\324\320\173\027\001\017\237"
	"\235\141\001\115\140\175\044\224\151\004\357\067\031\256\326\171"
	"\123\104\111\367\345\331\055\205\255\375\000\304\376\020\144\234"
	"\161\146\352\322\343\016\147\114\022\126\204\054\004\132\245\130"
	"\237\357\117\205\310\174\012\165\171\013\072\170\033\237\024\215"
	"\005\376\137\351\015\306\066\040\035\272\114\041\025\361\171\265"
	"\341\310\072\251\105\104\037\277\117\132\067\153\371\113\371\376"
	"\112\131\350\127\037\036\167\074\330\303\136\355\265\330\242\226"
	"\240\334\100\346\041\137\245\161\272\334\335\263\050\326\262\162"
	"\057\232\311\117\270\100\214\221\003\352\176\271\302\041\117\143"
	"\376\217\111\037\357\356\221\251\313\156\135\363\105\020\145\165"
	"\253\056\304\144\157\121\365\162\073\164\053\376\225\173\142\223"
	"\013\254\263\372\232\104\244\146\263\001\131\370\022\277\155\275"
	"\355\062\041\134\203\026\317\277\212\373\275\040\166\037\263\201"
	"\314\147\174\146\254\040\315\137\042\046\130\065\345\305\362\323"
	"\367\024\060\172\052\377\071\265\373\367\325\161\027\211\363\343"
	"\361\160\112\235\221\027\374\264\076\125\351\044\032\333\367\022"
	"\360\047\215\032\047\307\320\042\276\245\224\326\057\210\271\040"
	"\370\004\276\211\033\273\075\131\020\047\176\052\003\165\074\363"
	"\235\312\015\305\221\335\350\120\203\174\046\263\005\337\323\375"
	"\343\222\207\377\115\305\131\135\354\327\207\357\115\304\342\353"
	"\216\360\260\040\316\230\160\122\025\226\005\032\166\331\030\132"
	"\153\240\132\270\145\263\026\122\213\235\101\330\142\044\303\361"
	"\025\164\021\344\015\202\066\043\031\074\076\217\026\126\352\202"
	"\367\104\073\134\370\121\257\203\356\361\134\121\025\040\102\053"
	"\224\124\017\242\327\106\305\360\203\003\177\231\132\152\034\121"
	"\256\127\256\246\250\135\052\227\116\207\350\144\247\053\217\074"
	"\200\237\336\127\346\244\107\151\247\307\003\001\062\037\122\340"
	"\166\001\207\037\136\262\266\254\071\236\021\340\312\240\035\112"
	"\100\374\241\047\240\351\221\107\261\224\111\343\264\234\304\053"
	"\235\114\112\373\376\000\250\070\237\271\030\151\132\066\263\233"
	"\062\125\302\322"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = getenv("_");
	if (me == NULL) { me = argv[0]; }

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
