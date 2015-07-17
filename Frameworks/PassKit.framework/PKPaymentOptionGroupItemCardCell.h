/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentOptionGroupItemCardCell : PKPaymentOptionGroupItemCell {
    UIImageView * _cardArtView;
    UILabel * _censoredPANLabel;
    BOOL  _dimCardArt;
    UIColor * _disabledMainLabelColor;
    UIColor * _disabledSubTextLabelColor;
    UILabel * _displayLabel;
    UIColor * _mainLabelColor;
    PKPassSnapshotter * _passSnapshotter;
    BOOL  _showBillingAddress;
    UIColor * _subTextLabelColor;
}

@property (nonatomic) BOOL dimCardArt;
@property (nonatomic, retain) UIColor *disabledMainLabelColor;
@property (nonatomic, retain) UIColor *disabledSubTextLabelColor;
@property (nonatomic, retain) UIColor *mainLabelColor;
@property (nonatomic, retain) PKPassSnapshotter *passSnapshotter;
@property (nonatomic) BOOL showBillingAddress;
@property (nonatomic, retain) UIColor *subTextLabelColor;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_cardArtFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_censoredPANLabelFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_displayLabelFrame;
- (void)_updateCellContent;
- (void)dealloc;
- (BOOL)dimCardArt;
- (id)disabledMainLabelColor;
- (id)disabledSubTextLabelColor;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)mainLabelColor;
- (id)passSnapshotter;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier { BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; in void*x45; void*x46; void*x47; double x48; void*x49; void*x50; void*x51; BOOL x52; void*x53; void*x54; void*x55; void*x56; void*x57; const void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; unsigned char x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; id x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; unsigned char x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; unsigned char x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; unsigned short x122; void*x123; short x124; void*x125; void*x126; void*x127; void*x128; unsigned long x129; int x130; unsigned int x131/* : ? */; const void*x132; const void*x133; void*x134; void*x135; const int x136; void x137; void*x138; void*x139; void*x140; void*x141; const void*x142; void*x143; void*x144; void*x145; out const void*x146; short x147; void*x148; unsigned char x149; out const void*x150; void*x151; unsigned int x152; void*x153; float x154; const void*x155; void*x156; void*x157; void*x158; out const void*x159; void*x160; unsigned char x161; out const void*x162; void*x163; unsigned int x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; unsigned char x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; unsigned char x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; unsigned char x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; unsigned char x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; char *x424; void*x425; void*x426; void*x427; void*x428; void*x429; const out void*x430; out bool x431; void*x432; float x433; void*x434; short x435; void*x436; const BOOL x437; void*x438; int x439; void x440; int x441; void*x442; void*x443; unsigned char x444; out in void*x445; void*x446; int x447; in void*x448; const unsigned int x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; unsigned char x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; unsigned short x465; void*x466; short x467; void*x468; void*x469; void*x470; void*x471; unsigned long x472; int x473; unsigned int x474/* : ? */; const void*x475; const void*x476; void*x477; void*x478; const int x479; void x480; void*x481; void*x482; void*x483; void*x484; const void*x485; void*x486; void*x487; void*x488; out const void*x489; short x490; void*x491; void*x492; void*x493; void*x494; void*x495; out void*x496; in double x497; void*x498; void*x499; int x500; out in void*x501; float x502; const void*x503; void*x504; void*x505; void*x506; out const void*x507; void*x508; void*x509; void*x510; void*x511; void*x512; out void*x513; in double x514; void*x515; void*x516; int x517; out in void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; long long x569; unsigned char x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; long long x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; unsigned char x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; void*x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; void*x646; unsigned char x647; void*x648; void*x649; void*x650; void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; void*x677; void*x678; unsigned char x679; void*x680; void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; void*x687; unsigned int x688; void*x689; out void x690; int x691; void*x692; unsigned short x693; BOOL x694; const void*x695; unsigned int x696/* : ? */; unsigned int x697/* : ? */; void*x698; const void*x699; void*x700; void*x701; void*x702; unsigned int x703/* : ? */; in void*x704; int x705; long x706; oneway int x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; unsigned char x722; void*x723; void*x724; void*x725; void*x726; void*x727; void*x728; void*x729; void*x730; unsigned long x731; void*x732; unsigned int x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; const void*x740; void*x741; void*x742; unsigned int x743/* : ? */; long x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; unsigned int x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; in void*x766; void*x767; void*x768; in void*x769; void*x770; void*x771; void*x772; void*x773; void*x774; void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; unsigned char x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; unsigned long x792; void*x793; unsigned int x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; const void*x801; void*x802; void*x803; unsigned int x804/* : ? */; long x805; void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; void*x814; void*x815; void*x816; const void*x817; void*x818; unsigned int x819/* : ? */; void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; void*x828; void*x829; void*x830; void*x831; void*x832; void*x833; void*x834; void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; unsigned char x844; void*x845; void*x846; void*x847; void*x848; void*x849; void*x850; void*x851; unsigned char x852; void*x853; void*x854; void*x855; out void*x856; void*x857; BOOL x858; BOOL x859; out void*x860; in void*x861; unsigned short x862; void*x863; out const void*x864; unsigned short x865; void*x866; short x867; short x868; int x869; out in void*x870; void*x871; void*x872; void*x873; void*x874; void*x875; void*x876; void*x877; void*x878; void*x879; void*x880; void*x881; void*x882; void*x883; void*x884; void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; unsigned long x893; void*x894; void*x895; double x896; void*x897; const unsigned int x898/* : ? */; out void*x899; const double x900; unsigned int x901; in void*x902; void*x903; const in void*x904; long x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void* x916[ /* ? */ ]; void*x917; oneway short x918; short x919; void*x920; void*x921; void*x922; const int x923; void*x924; void*x925; const unsigned int x926; in void*x927; void*x928; void*x929; unsigned char x930; out in float x931; int x932; void*x933; void*x934; const void*x935; void*x936; int x937; out in unsigned short x938; void*x939; void*x940; void*x941; void*x942; void*x943; void*x944; void*x945; void*x946; void*x947; void*x948; void*x949; void*x950; void*x951; void*x952; void*x953; void*x954; void*x955; unsigned long x956; unsigned char x957; long x958; out void*x959; double x960; bool x961; void*x962; double x963; void*x964; void*x965; void*x966; int x967; in void*x968; unsigned char x969; void*x970; void*x971; void*x972; void*x973; out const void*x974; void*x975; void*x976; void*x977; void*x978; void*x979; void*x980; void*x981; void*x982; void*x983; void*x984; void*x985; void*x986; void*x987; void*x988; void*x989; void*x990; void*x991; void*x992; void*x993; void*x994; void*x995; void*x996; void*x997; void*x998; void*x999; void*x1000; void*x1001; void*x1002; void*x1003; void*x1004; unsigned int x1005/* : ? */; long x1006; void*x1007; double x1008; void x1009; void*x1010; const void*x1011; int x1012; short x1013; int x1014; in void*x1015; unsigned int x1016; in float x1017; out void*x1018; void*x1019; void*x1020; void*x1021; void*x1022; void*x1023; void*x1024; void*x1025; void*x1026; void*x1027; void*x1028; void*x1029; void*x1030; void*x1031; void*x1032; void*x1033; void*x1034; void*x1035; void*x1036; void*x1037; void*x1038; void*x1039; void*x1040; void*x1041; void*x1042; void*x1043; long doublex1044; void*x1045; void*x1046; BOOL x1047; out const double x1048; long doublex1049; out void*x1050; in long x1051; out void*x1052; double x1053; void*x1054; void*x1055; short x1056; void*x1057; void*x1058; void*x1059; void*x1060; void*x1061; void*x1062; void*x1063; void*x1064; void*x1065; void*x1066; void*x1067; void*x1068; void*x1069; void*x1070; void*x1071; double x1072; int x1073; out void*x1074; in int x1075; void*x1076; void*x1077; void*x1078; void*x1079; void*x1080; void*x1081; void*x1082; void*x1083; void*x1084; void*x1085; void*x1086; void*x1087; void*x1088; void*x1089; void*x1090; void*x1091; void*x1092; void*x1093; void*x1094; void*x1095; void*x1096; inout void*x1097; void*x1098; long doublex1099; out BOOL x1100; void*x1101; void*x1102; void*x1103; in void*x1104; void*x1105; void*x1106; int x1107; out in void*x1108; void*x1109; void*x1110; void*x1111; void*x1112; void*x1113; void*x1114; void*x1115; void*x1116; void*x1117; void*x1118; void*x1119; void*x1120; void*x1121; void*x1122; void*x1123; unsigned long x1124; void*x1125; unsigned short x1126; void*x1127; void*x1128; out const void*x1129; void*x1130; long x1131; void*x1132; void*x1133; out void*x1134; void*x1135; in unsigned char x1136; out in void*x1137; void*x1138; void*x1139; void*x1140; void*x1141; void*x1142; void*x1143; void*x1144; void*x1145; void*x1146; void*x1147; void*x1148; void*x1149; void*x1150; void*x1151; void*x1152; bycopy unsigned char x1153; out void*x1154; void*x1155; out short x1156; void*x1157; double x1158; bool x1159; int x1160; BOOL x1161; void*x1162; BOOL x1163; long x1164; void*x1165; void*x1166; out void*x1167; void*x1168; void*x1169; unsigned short x1170; void*x1171; void*x1172; void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; void*x1178; void*x1179; void*x1180; void*x1181; void*x1182; void*x1183; void*x1184; void*x1185; void*x1186; void*x1187; void*x1188; void*x1189; void*x1190; void*x1191; void*x1192; void*x1193; void*x1194; void*x1195; long doublex1196; void*x1197; void*x1198; const void*x1199; void*x1200; const void*x1201; void*x1202; void*x1203; void*x1204; const out void*x1205; void*x1206; const void*x1207; int x1208; void*x1209; short x1210; void*x1211; void*x1212; void*x1213; void*x1214; void*x1215; void*x1216; void*x1217; void*x1218; void*x1219; void*x1220; void*x1221; void*x1222; void*x1223; void*x1224; out void*x1225; out short x1226; long doublex1227; void*x1228; void*x1229; void*x1230; unsigned short x1231; out void*x1232; const BOOL x1233; void*x1234; unsigned short x1235; void*x1236; BOOL x1237; void*x1238; int x1239; out in unsigned char x1240; void*x1241; BOOL x1242; void*x1243; void*x1244; void*x1245; void*x1246; void*x1247; void*x1248; void*x1249; void*x1250; void*x1251; void*x1252; void*x1253; void*x1254; void*x1255; void*x1256; void*x1257; void*x1258; void*x1259; void*x1260; void*x1261; bool x1262; void*x1263; void*x1264; void*x1265; unsigned char x1266; void*x1267; BOOL x1268; void*x1269; void*x1270; double x1271; inout void*x1272; void*x1273; unsigned int x1274/* : ? */; void*x1275; const void*x1276; void*x1277; void*x1278; void*x1279; void*x1280; void*x1281; void*x1282; void*x1283; void*x1284; void*x1285; void*x1286; void*x1287; void*x1288; void*x1289; void*x1290; void*x1291; id x1292; void*x1293; oneway int x1294; double x1295; void*x1296; out void*x1297; void*x1298; short x1299; short x1300; void*x1301; void*x1302; void*x1303; void*x1304; void*x1305; BOOL x1306; out const double x1307; int x1308; in void*x1309; oneway int x1310; void*x1311; void*x1312; unsigned char x1313; out in void*x1314; const out long x1315; long x1316; void*x1317; const void*x1318; void*x1319; void*x1320; void*x1321; void*x1322; void*x1323; void*x1324; void*x1325; void*x1326; void*x1327; void*x1328; void*x1329; unsigned char x1330; BOOL x1331; BOOL x1332; out void*x1333; in void*x1334; void*x1335; void*x1336; void*x1337; void*x1338; void*x1339; void*x1340; void*x1341; void*x1342; void*x1343; void*x1344; void*x1345; void*x1346; void*x1347; void*x1348; void*x1349; void*x1350; void*x1351; void*x1352; void*x1353; void*x1354; void*x1355; void*x1356; void*x1357; void*x1358; void*x1359; unsigned short x1360; BOOL x1361; out const void*x1362; unsigned int x1363; in void*x1364; void*x1365; const in void*x1366; long x1367; void*x1368; void*x1369; void*x1370; void*x1371; void*x1372; void*x1373; void*x1374; void*x1375; void*x1376; void*x1377; void*x1378; void*x1379; void*x1380; void*x1381; void*x1382; void*x1383; void*x1384; void*x1385; unsigned short x1386; unsigned char x1387; void*x1388; void*x1389; long doublex1390; void*x1391; void*x1392; void*x1393; void*x1394; long doublex1395; bool x1396; out void*x1397; in double x1398; short x1399; void*x1400; int x1401; void*x1402; void*x1403; long x1404; int x1405; in void*x1406; void*x1407; void*x1408; void*x1409; void*x1410; void*x1411; void*x1412; void*x1413; void*x1414; void*x1415; void*x1416; void*x1417; void*x1418; void*x1419; void*x1420; void*x1421; void*x1422; void*x1423; void*x1424; void*x1425; void*x1426; void*x1427; void*x1428; void*x1429; void*x1430; void*x1431; unsigned int x1432; in in void*x1433; const unsigned short x1434; void*x1435; void*x1436; double x1437; out void*x1438; unsigned long x1439; void*x1440; unsigned int x1441/* : ? */; void*x1442; long x1443; void*x1444; void*x1445; void*x1446; void*x1447; void*x1448; void*x1449; void*x1450; void*x1451; void*x1452; void*x1453; void*x1454; void*x1455; void*x1456; void*x1457; void*x1458; void*x1459; unsigned short x1460; unsigned int x1461; void*x1462; void*x1463; void*x1464; void*x1465; void*x1466; void*x1467; const void*x1468; void*x1469; void*x1470; void*x1471; void*x1472; void*x1473; void*x1474; void*x1475; void*x1476; void*x1477; void*x1478; void*x1479; void*x1480; void*x1481; void*x1482; void*x1483; void*x1484; void*x1485; void*x1486; void*x1487; void*x1488; void*x1489; inout out void*x1490; void*x1491; long x1492; void*x1493; void*x1494; int x1495; in void*x1496; void*x1497; void*x1498; void*x1499; out const void*x1500; void*x1501; void*x1502; void*x1503; void*x1504; void*x1505; void*x1506; void*x1507; void*x1508; void*x1509; void*x1510; void*x1511; void*x1512; void*x1513; void*x1514; unsigned short x1515; void*x1516; in out void*x1517; in void*x1518; void*x1519; void*x1520; short x1521; void*x1522; void*x1523; void*x1524; void*x1525; int x1526; in void*x1527; unsigned short x1528; void*x1529; const void*x1530; void*x1531; void*x1532; void*x1533; void*x1534; void*x1535; void*x1536; void*x1537; void*x1538; void*x1539; void*x1540; void*x1541; void*x1542; void*x1543; void*x1544; void*x1545; void*x1546; void*x1547; void*x1548; void*x1549; void*x1550; void*x1551; void*x1552; void*x1553; void*x1554; void*x1555; void*x1556; void*x1557; long doublex1558; void*x1559; void*x1560; void*x1561; void*x1562; void*x1563; void*x1564; void*x1565; void*x1566; void*x1567; void*x1568; void*x1569; void*x1570; void*x1571; void*x1572; void*x1573; void*x1574; void*x1575; void*x1576; void*x1577; void*x1578; void*x1579; void*x1580; void*x1581; void*x1582; void*x1583; void*x1584; void*x1585; void*x1586; void*x1587; void*x1588; void*x1589; void*x1590; void*x1591; void*x1592; void*x1593; unsigned int x1594/* : ? */; long x1595; void*x1596; void*x1597; void*x1598; short x1599; void*x1600; long x1601; void*x1602; void*x1603; void*x1604; BOOL x1605; out const double x1606; void*x1607; void*x1608; void*x1609; void*x1610; void*x1611; void*x1612; void*x1613; void*x1614; void*x1615; void*x1616; void*x1617; void*x1618; void*x1619; unsigned long x1620; void*x1621; out out long x1622; short x1623; void*x1624; const void*x1625; void*x1626; void*x1627; void*x1628; in void*x1629; void*x1630; void*x1631; in double x1632; void*x1633; const unsigned char x1634; out void*x1635; void*x1636; void*x1637; in double x1638; void*x1639; in BOOL x1640; out double x1641; void*x1642; const void*x1643; void*x1644; void*x1645; void*x1646; void*x1647; void*x1648; void*x1649; void*x1650; void*x1651; void*x1652; void*x1653; void*x1654; void*x1655; unsigned char x1656; out in void*x1657; void*x1658; void*x1659; void*x1660; void*x1661; void*x1662; void*x1663; void*x1664; void*x1665; void*x1666; void*x1667; void*x1668; void*x1669; void*x1670; void*x1671; void*x1672; void*x1673; void*x1674; void*x1675; void*x1676; void*x1677; void*x1678; void*x1679; void*x1680; void*x1681; void*x1682; void*x1683; void*x1684; void*x1685; long doublex1686; BOOL x1687; BOOL x1688; void*x1689; void*x1690; void*x1691; unsigned short x1692; void*x1693; void*x1694; const void*x1695; short x1696; void*x1697; void*x1698; unsigned long x1699; void*x1700; void*x1701; long long x1702; void*x1703; void*x1704; short x1705; void*x1706; void*x1707; void*x1708; void*x1709; void*x1710; void*x1711; void*x1712; void*x1713; void*x1714; void*x1715; void*x1716; void*x1717; void*x1718; void*x1719; void*x1720; void*x1721; void*x1722; void*x1723; void*x1724; void*x1725; void*x1726; void*x1727; void*x1728; void*x1729; void*x1730; void*x1731; void*x1732; void*x1733; double x1734; unsigned int x1735/* : ? */; void*x1736; BOOL x1737; void*x1738; void*x1739; void*x1740; in double x1741; void*x1742; const void*x1743; void*x1744; void*x1745; void*x1746; void*x1747; void*x1748; void*x1749; void*x1750; void*x1751; void*x1752; void*x1753; void*x1754; void*x1755; void*x1756; void*x1757; void*x1758; void*x1759; unsigned int x1760; void*x1761; void*x1762; void*x1763; unsigned int x1764/* : ? */; out void*x1765; const double x1766; unsigned char x1767; void*x1768; in double x1769; int x1770; double x1771; void*x1772; void*x1773; void*x1774; bool x1775; void*x1776; const unsigned long x1777; void*x1778; void*x1779; out void*x1780; void*x1781; void*x1782; void*x1783; const int x1784; unsigned int x1785/* : ? */; void*x1786; void*x1787; void*x1788; short x1789; void*x1790; void*x1791; void*x1792; void*x1793; void*x1794; void*x1795; void*x1796; void*x1797; void*x1798; void*x1799; void*x1800; void*x1801; bycopy oneway unsigned short x1802; void*x1803; void*x1804; long x1805; void*x1806; void*x1807; void*x1808; const int x1809; unsigned int x1810/* : ? */; void*x1811; void*x1812; void*x1813; void*x1814; void*x1815; void*x1816; void*x1817; void*x1818; void*x1819; void*x1820; void*x1821; void*x1822; void*x1823; void*x1824; void*x1825; void*x1826; void*x1827; void*x1828; void*x1829; void*x1830; void x1831; void*x1832; in void*x1833; void*x1834; const out BOOL x1835; void*x1836; short x1837; short x1838; out const void*x1839; void*x1840; void*x1841; void*x1842; void*x1843; void*x1844; void*x1845; void*x1846; void*x1847; void*x1848; void*x1849; void*x1850; void*x1851; void*x1852; void*x1853; void*x1854; void*x1855; void*x1856; void*x1857; out void*x1858; void*x1859; double x1860; void*x1861; void*x1862; int x1863; in void*x1864; void*x1865; void*x1866; long x1867; void*x1868; void*x1869; int x1870; void x1871; void*x1872; long doublex1873; void*x1874; void*x1875; void*x1876; void*x1877; out const void*x1878; void*x1879; void*x1880; void*x1881; void*x1882; const void*x1883; void*x1884; void*x1885; void*x1886; void*x1887; void*x1888; void*x1889; void*x1890; void*x1891; void*x1892; void*x1893; void*x1894; void*x1895; void*x1896; unsigned long x1897; void*x1898; void*x1899; void*x1900; long x1901; void*x1902; void*x1903; void*x1904; unsigned int x1905/* : ? */; long x1906; void*x1907; bycopy float x1908; unsigned char x1909; out in void*x1910; void*x1911; in void*x1912; oneway int x1913; void*x1914; void*x1915; unsigned char x1916; out in void*x1917; const out long x1918; long x1919; void*x1920; const void*x1921; void*x1922; void*x1923; void*x1924; void*x1925; void*x1926; void*x1927; void*x1928; bool x1929; const void*x1930; void*x1931; void*x1932; void*x1933; void*x1934; void*x1935; void*x1936; void*x1937; out void*x1938; void*x1939; short x1940; short x1941; void*x1942; void*x1943; void*x1944; void*x1945; in int x1946; float x1947; void*x1948; short x1949; void*x1950; void*x1951; void*x1952; void*x1953; void*x1954; void*x1955; void*x1956; in void*x1957; void*x1958; long long x1959; void*x1960; void*x1961; unsigned short x1962; void*x1963; unsigned char x1964; void*x1965; long x1966; long x1967; void*x1968; void*x1969; in void*x1970; void*x1971; unsigned int x1972; void*x1973; void*x1974; const void*x1975; void*x1976; out const void*x1977; void*x1978; void*x1979; void*x1980; void*x1981; void*x1982; void*x1983; id x1984; void*x1985; void*x1986; void*x1987; void*x1988; unsigned short x1989; void*x1990; short x1991; void*x1992; void*x1993; void*x1994; bool x1995; void*x1996; in double x1997; long x1998; void*x1999; void*x2000; void*x2001; in void*x2002; void*x2003; void*x2004; const void*x2005; void*x2006; void*x2007; void*x2008; void*x2009; void*x2010; void*x2011; void*x2012; bycopy void*x2013; void*x2014; void*x2015; void*x2016; void*x2017; void*x2018; const out double x2019; void*x2020; BOOL x2021; void*x2022; short x2023; void*x2024; void*x2025; short x2026; void*x2027; out in short x2028; void*x2029; unsigned int x2030; in void*x2031; void*x2032; const in void*x2033; long x2034; void*x2035; void*x2036; void*x2037; void*x2038; void*x2039; void*x2040; void*x2041; void*x2042; void*x2043; void*x2044; void*x2045; void*x2046; void*x2047; void*x2048; void*x2049; void*x2050; void*x2051; void*x2052; void*x2053; void*x2054; void*x2055; void*x2056; void*x2057; void*x2058; BOOL x2059; void*x2060; int x2061; void x2062; int x2063; void*x2064; void*x2065; void*x2066; const out void*x2067; void*x2068; void*x2069; void*x2070; void*x2071; out void*x2072; void*x2073; oneway int x2074; void*x2075; void*x2076; unsigned char x2077; out in void*x2078; const out long x2079; long x2080; void*x2081; const void*x2082; void*x2083; void*x2084; void*x2085; void*x2086; void*x2087; void*x2088; void*x2089; void*x2090; void*x2091; void*x2092; void*x2093; void*x2094; void*x2095; unsigned int x2096; void*x2097; void*x2098; void*x2099; unsigned int x2100/* : ? */; out void*x2101; const double x2102; unsigned char x2103; void*x2104; in double x2105; int x2106; double x2107; void*x2108; void*x2109; void*x2110; bool x2111; void*x2112; const unsigned long x2113; void*x2114; void*x2115; out void*x2116; void*x2117; void*x2118; void*x2119; void*x2120; void*x2121; void*x2122; void*x2123; void*x2124; void*x2125; void*x2126; void*x2127; void*x2128; void*x2129; void*x2130; void*x2131; void*x2132; void*x2133; }*)arg1;
- (void)setDimCardArt:(BOOL)arg1;
- (void)setDisabledMainLabelColor:(id)arg1;
- (void)setDisabledSubTextLabelColor:(id)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPassSnapshotter:(id)arg1;
- (void)setShowBillingAddress:(BOOL)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (BOOL)showBillingAddress;
- (id)subTextLabelColor;

@end
