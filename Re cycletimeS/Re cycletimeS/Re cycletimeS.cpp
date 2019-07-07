#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include <graphics.h>
#include <math.h>

void chapter0();
void chapter1();
void chapter2();
void chapter3();
void chapterHE();
void chapterBE();
void jigsaw();
void snakegame();
void cancellation();
int number = 0;

int main()
{
	initgraph(1280, 960);
	IMAGE SCENE0;
	loadimage(&SCENE0, L"scene0.jpg");
	putimage(0, 0, &SCENE0);
	setcolor(WHITE);
	settextstyle(20, 0, _T("黑体"));
	outtextxy(525, 760, L"Press any key to continue...");
	system("pause");
	chapter0();
	chapter1();
	chapter2();
	chapter3();
}

void chapter0()
{
	initgraph(1280, 960);
	IMAGE SCENE101;
	loadimage(&SCENE101, L"scene1-01.jpg");
	IMAGE SCENE1;
	loadimage(&SCENE1, L"scene1.jpg");
	putimage(0, 0, &SCENE1);
	_getch();
	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"女性沉静的声音");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……总之，这条线索算是断了。");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"男性不耐烦的声音");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"不是，我说，伊玛——你们真的指望能从那个机器人嘴里问出什么？我看这根本就是亚");
	outtextxy(224, 770, L"当那个老东西给我们下的套子，他巴不得我们多走弯路——");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"伊玛");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"——霍克，我们不应该放弃任何一点可能性。");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"霍克");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"可我看亚当就是个老疯子。他加入我们的时候口口声声保证为我们的计划出力，但");
	outtextxy(224, 770, L"是到头来成果不知道有没有，还不明不白地自杀了。说实话，我倒是感觉他死了我");
	outtextxy(224, 800, L"们还轻松点……");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"伊玛");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"别说了，霍克。尊重死者。");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"伊玛");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"总之我们已经尽力了，亚当博士留下的信息中，说到他这两年来的成果都存储在机");
	outtextxy(224, 770, L"器人的记忆云图中，但是我们这两天已经翻遍了Iris的全部存储空间，只有她出厂");
	outtextxy(224, 800, L"以来的记忆录像和一些不明所以的乱码，根本没找到和他的项目相关的数据。");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"霍克（小声嘀咕）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"所以我说他是老疯子。");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"伊玛（叹气）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"当务之急是找一个人来接替亚当博士的工作。霍克，麻烦你联系人事部，让他们把");
	outtextxy(224, 770, L"招募信息发到官方网站上去——");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"霍克（惊讶地）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你疯了，伊玛！现在这个时候！谁会加入我们？咱们的计划已经被上头判了死刑，");
	outtextxy(224, 770, L"不过也难怪啦，三年没有什么突破性的进展……这个时候谁还愿意往坑里跳？除非");
	outtextxy(224, 800, L"他不正常。");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"伊玛");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我们不应该放弃任何一点可能性，霍克！");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"霍克");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……好吧，我去联系。但愿我们能找到合适的人选。");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(236, 692, L"伊玛");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"至少我是这样希望的……");
	_getch();

	putimage(0, 0, &SCENE101);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"两人的身影渐渐走远，许久之后，走廊的灯又熄灭了。");
	_getch();


}

void chapter1()
{
	initgraph(1280, 960);
	IMAGE SCENE2;
	loadimage(&SCENE2, L"scene2.jpg");
	IMAGE SCENE201;
	loadimage(&SCENE201, L"scene2-01.jpg");
	IMAGE SCENE3;
	loadimage(&SCENE3, L"scene3.jpg");
	IMAGE SCENE300;
	loadimage(&SCENE300, L"scene3-00.jpg");
	IMAGE SCENE301;
	loadimage(&SCENE301, L"scene3-01.jpg");
	IMAGE SCENE302;
	loadimage(&SCENE302, L"scene3-02.jpg");
	IMAGE SCENE102;
	loadimage(&SCENE102, L"scene1-02.jpg");
	IMAGE SCENE401;
	loadimage(&SCENE401, L"scene4-01.jpg");
	IMAGE SCENE402;
	loadimage(&SCENE402, L"scene4-02.jpg");
	IMAGE SCENE701;
	loadimage(&SCENE701, L"scene7-01.jpg");

	putimage(0, 0, &SCENE2);
	_getch();
	putimage(0, 0, &SCENE201);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"天空仍然被污染的浓云遮蔽着。在某座山脚的一处基地门前，身穿防护服的青年从");
	outtextxy(224, 770, L"口袋里掏出磁卡，犹豫了一下，还是把它放上了大门的感应区。");
	_getch();
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"机械女声");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"正在验证身份。身份验证完毕。");
	_getch();

	putimage(0, 0, &SCENE201);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"机械女声");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"早上好，爱德华博士。");
	_getch();

	putimage(0, 0, &SCENE201);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（苦笑）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"早上好。");
	_getch();

	putimage(0, 0, &SCENE3);
	_getch();
	putimage(0, 0, &SCENE300);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"青年走进基地，把防护服脱下来放在隔离区，自己则轻车熟路地走进一间办公室，");
	outtextxy(224, 770, L"打开了一排电脑中的一台。");
	_getch();
	putimage(0, 0, &SCENE300);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那么，各位，一起加油……吧。");
	_getch();

	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"没有人回应他。基地里在一周以前就已经空无一人，这个基地中所秘密进行的，耗");
	outtextxy(224, 770, L"时三年的“时间溯回”计划，已经在十天前宣告失败。");
	_getch();

	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这个在报纸上被定义为“一场精妙而愚蠢的欺骗”的计划，遭到了一些激进人士前");
	outtextxy(224, 770, L"所未有的暴力对抗。部分参与者的家人被害，自身受到威胁，而基地内部，希望也");
	outtextxy(224, 800, L"像沙漏里的沙子一样慢慢流尽。");
	_getch();

	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"一个月前，某些恐怖组织扬言要定位该计划的总基地，不惜一切代价对其进行毁灭");
	outtextxy(224, 770, L"性打击。面对手持高科技的疯狂的报复者，基地高层决定解散成员组，同时宣告计");
	outtextxy(224, 800, L"划失败。");
	_getch();

	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"对于在绝望中挣扎的大多数人而言，他们不懂什么科学道理，他们只知道，人类对");
	_getch();

	putimage(0, 0, &SCENE300);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华关闭了浏览器。");
	_getch();

	putimage(0, 0, &SCENE300);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"今天外面的情况也不容乐观呢，我的工作也是一样的不顺利……啊啊，这里究竟应");
	outtextxy(224, 770, L"该怎么处理才好啊，真叫人头痛……");
	_getch();

	putimage(0, 0, &SCENE301);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"清澈的女性声音");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……正在读取磁卡数据。");
	_getch();

	putimage(0, 0, &SCENE301);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"正在爱德华双手抱头苦恼不已的时候，一个毫无起伏的女性声音从他身后传来，吓");
	outtextxy(224, 770, L"得他身躯一震，迅速抬头转身看向后方。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"他身后站着一位看起来大概有十五六岁的黑发少女。她手里拿着爱德华的身份磁卡");
	outtextxy(224, 770, L"，正面无表情地注视着它。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"黑发少女");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华·史蒂夫，20岁，原“时间溯回”计划组成员。职务是……哦，你是来接任");
	outtextxy(224, 770, L"亚当博士的工作的。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我现在也是计划组成员，以后也是。就算所有人都抛弃了这个计划……不过说起来");
	outtextxy(224, 770, L"你是谁？我从来没有在基地见过你。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"黑发少女");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"编号PLA0518。或者你也可以称我Iris，这两个名字对我而言是一样的。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"Iris？你似乎认识亚当博士。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我是他的私人机器人。回答你的第二个问题，在你到达基地之前我就被固定在数据");
	outtextxy(224, 770, L"部的一台机器上了，十五分钟前那台机器的电量刚刚耗尽，我才从那里出来。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……听起来你受过非人的折磨，他们为什么要这么对你？");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我本来也不是人。但是我在那里的原因我不能说，博士签过保密协议，我也一样。");
	outtextxy(224, 770, L"这涉及到与计划有关的一些事情，除了管理员我无法告知任何人，请见谅。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"好吧，我的确不应该多问。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那么我是否可以请求你给我一些帮助？既然你是亚当博士的机器人，或许在他的工");
	outtextxy(224, 770, L"工作上你可以提供一些……");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"很抱歉，我不能。博士生前从不让我插手他的工作，对他的研究我一无所知。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这样啊，那太遗憾了——");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"——但是我或许知道有人可以帮助你。基地里还有另一台机器人，她是整个基地的助手");
	outtextxy(224, 770, L"机器人，应该存储了你需要的一些数据。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"什么，还有另一台？");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"她被关机了，搁置在仓库里，在博士去世后的第二天，你当然没有见过。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……哈哈，基地对机器人还真是充满了恶意啊。不过……能不能麻烦你带我过去？");
	outtextxy(224, 770, L"我不知道仓库的位置。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"当然可以，请和我来。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"走廊里响起了Iris和爱德华一轻一重的脚步声。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华跟在Iris身后，偷偷地望向机器少女的侧脸。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"Iris在人类的标准下绝对是个面容精致的女孩儿。她黑色的长发，白皙的面庞，还有");
	outtextxy(224, 770, L"她平静的蓝色瞳孔，都让人不由得去想——如果她是人类的话，假以时日肯定会成为倾");
	outtextxy(224, 800, L"国倾城的美人。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L" Iris停下了脚步，爱德华差一点撞在她身上。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你已经看了我3分钟25秒了，爱德华先生。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（尴尬地）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"非常抱歉。那个，我只是在想，你的名字……对，名字，名字很特别。Iris，这是彩");
	outtextxy(224, 770, L"虹女神的名字，你知道吧？就是古代神话里面的……");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我的资料库里有关于这个名字的所有信息。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（尴尬地挠头）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"啊，我忘了你是机器人……不过，总感觉我对你的名字有印象啊，感觉在什么人的");
	outtextxy(224, 770, L"资料里面看到过……唔。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华闭上了嘴。Iris的表情明显不希望这个话题继续下去。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"如果可以的话，希望你不要再提起这个话题，这是我个人的请求。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"好、好的。那个，我们不继续走了吗？");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"就是这里。我们已经到了。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华用磁卡打开了仓库的大门。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"比起仓库，这里更像是堆积废品的垃圾场……");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"几十平方米的房间里堆满了各种各样的东西。机器完整和破损的零件放在一起，一");
	outtextxy(224, 770, L"些补给品的袋子像是被老鼠啃过，地上扔着的防护服头盔碎了一半，锋利的缺口感");
	outtextxy(224, 800, L"觉比外面的重度污染更危险。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"她的素体看起来很像人类女性十三四岁的模样，应该被装在什么箱子里面了。我们");
	outtextxy(224, 770, L"可以分头找一找。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"好的。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……咦？");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华从仓库角落里抱起一盆植物，它看上去长势相当旺盛。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我觉得你可能没有见过这种花，毕竟这几年的污染几乎杀光了地表所有的植物……");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"白色铃兰，多年生草本植物，木贼门，百合纲，天门冬目，天门冬科，铃兰族铃兰");
	outtextxy(224, 770, L"属。你为什么会认为我不知道？");

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华（尴尬）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我又忘了你是机器人。好吧，我能不能拜托你帮我照顾它？我不擅长养植物，但是");
	outtextxy(224, 770, L"也不好放它在这里不管。它也是生命啊。");

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris（接过花盆）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"对我来说无所谓。我本来就是家政机器人。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"一段时间后，仓库另一侧的Iris向爱德华招了招手。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"找到了。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"Iris掀开一块像旧床单一样的东西，露出了下面的铁箱。她熟练地转动密码锁，打开");
	outtextxy(224, 770, L"了箱盖。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华凑过来，看到里面静静躺着一个短发的机器少女。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这是她的备用能源，不过现在也处于能量耗尽的状态，可能需要人工充能。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"需要我怎么做？");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris（指着手中零件的显示屏）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"分别把这六种颜色的能量条充满就好。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"好的，交给我。");
	_getch();

	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华把备用能源塞到短发少女后背的空槽中，并按下了开机键。");
	_getch();
	closegraph();

	cancellation();

	initgraph(1280, 960);
	putimage(0, 0, &SCENE401);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"没过多久，短发少女的身体就僵硬地动了一下。");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"稚嫩的机械女声");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……正在初始化。初始化完成。请求连接到基地网络。连接完成。正在更新数据库");
	outtextxy(224, 770, L"。正在开机……");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"短发的机器人抬起头来看向爱德华。");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"短发少女");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"您是爱德华博士吧？SAA0605，很高兴为您服务！");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你好，S……抱歉，你的名字我有点记不住。你有其他的名字吗？");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA0605");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"没——有。这是我的出厂编号，我唯一的名字，你可以简称我为SAA，但是不许给我乱起");
	outtextxy(224, 770, L"别的名字！我们Super Assistant Android可是以自己的身份为自豪的。");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"（原来这孩子的性格是这么鲜活的类型的吗……）");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那好的，SAA。你应该知道我的职务。");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"基地里的每一个人我可是都了如指掌。");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我现在需要你的帮助，在工作上我遇到了一些麻烦，如果可以还请你把你知道的一");
	outtextxy(224, 770, L"些数据告诉我。");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"没问题。基地里的每一个人都是我的管理员，只要你一声令下，我什么都会去做~");
	_getch();

	putimage(0, 0, &SCENE402);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（笑）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那就多多关照了，SAA。");
	_getch();

	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"（正在读取PLA0518的数据库……）");
	_getch();

	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"（正在生成图像……载入完毕。）");
	_getch();

	putimage(0, 0, &SCENE701);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"PLA0518");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"初始化完成。PLA0518，为您服务。");
	_getch();

	putimage(0, 0, &SCENE701);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"亚当");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你醒了，Iris。");
	_getch();

	putimage(0, 0, &SCENE701);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"PLA0518");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"Iris是管理员给我的新名字吗？我记住了。");
	_getch();

	putimage(0, 0, &SCENE701);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"亚当");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"叫我父亲就好，不必用那么生硬的称呼。");
	_getch();

	putimage(0, 0, &SCENE701);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"PLA0518");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我记住了。");
	_getch();

	putimage(0, 0, &SCENE701);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"亚当（欣喜地）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你真的和她长的一模一样。我已经把她的性格描述交给技术部的人，很快就会被数");
	outtextxy(224, 770, L"据化，这样一来，我的Iris就能永远陪着我了……告诉我，Iris，再次见到爸爸，你开");
	outtextxy(224, 800, L"心吗？");
	_getch();

	putimage(0, 0, &SCENE701);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我的系统预设不包括这个问题的答案，请您告诉我应该说什么。");
	_getch();

	putimage(0, 0, &SCENE701);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"亚当的笑容僵在了脸上，继而转变为非常失望的表情。");
	_getch();

	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"亚当");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……果然机器就是机器。算了，我去工作了，你更新完自己的数据库就待机吧。");
	_getch();

	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我明白了，父亲。");
	_getch();

}

void chapter2()
{
	initgraph(1280, 960);
	IMAGE SCENE303;
	loadimage(&SCENE303, L"scene3-03.jpg");
	IMAGE SCENE302;
	loadimage(&SCENE302, L"scene3-02.jpg");
	IMAGE SCENE304;
	loadimage(&SCENE304, L"scene3-04.jpg");
	IMAGE SCENE501;
	loadimage(&SCENE501, L"scene5-01.jpg");
	IMAGE SCENE601;
	loadimage(&SCENE601, L"scene6-01.jpg");
	IMAGE SCENE602;
	loadimage(&SCENE602, L"scene6-02.jpg");
	IMAGE SCENE603;
	loadimage(&SCENE603, L"scene6-03.jpg");
	IMAGE SCENE700;
	loadimage(&SCENE700, L"scene7-00.jpg");
	IMAGE SCENE502;
	loadimage(&SCENE502, L"scene5-02.jpg");

	putimage(0, 0, &SCENE303);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华放下手中的工作，伸了个懒腰。");
	_getch();

	putimage(0, 0, &SCENE303);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你已经连续工作了四个小时了，爱德华博士。你真的不考虑稍微休息一下吗？可别");
	outtextxy(224, 770, L"把自己累到猝死哦。");
	_getch();

	putimage(0, 0, &SCENE303);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（笑）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那倒还不至于。我对自己的身体还是有点自信的，不过谢谢关心。");
	_getch();

	putimage(0, 0, &SCENE303);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华接过SAA递过来的咖啡一饮而尽，环顾了一下四周，看到Iris正站在门口注视着");
	outtextxy(224, 770, L"他的方向。");
	_getch();

	putimage(0, 0, &SCENE303);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……你站在那儿很久了吗，Iris？");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"工作的时候不应该打扰你吧。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"如果是你的话我其实不介意……你有什么事吗？");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"来告诉你那盆铃兰长得很好。它快要开花了。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"是吗？那太好了。……你不会只是要和我说这个吧。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"还有些问题是我从第一次见到你就在想的，但是我感觉可能会冒犯到你。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"没关系，你尽管问我就好。");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你为什么还在这里工作？据我所知这个计划已经宣告失败了。其他计划组成员已经");
	outtextxy(224, 770, L"离开这里去躲避恐怖组织的迫害了，你难道就不怕死？");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这个问题啊……");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"怎么说呢，这里算是我在学校的时候就憧憬的地方吧……我很小的时候就在一次事");
	outtextxy(224, 770, L"故中失去了所有的亲人，是一位善良的夫人一直为我提供生活费用。三年前她死于");
	outtextxy(224, 800, L"那次核污染爆发……从那时起我就想着如果我能为这个世界做些什么就好了，哪怕");
	outtextxy(224, 830, L"只有一点点也好……");
	_getch();

	putimage(0, 0, &SCENE302);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"而且我早就是无家可归的孩子了。离开了这里，我又能去哪里呢？我并非不厌恶死");
	outtextxy(224, 770, L"亡，但是如果离开了这里，我的生命也就没有意义了。所以就算恐怖组织轰开基地");
	outtextxy(224, 800, L"的大门，我也会接着研究下去。只要我的手还能写，我就不会停止。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"他们如果对你动手，那也是在我碎成零件之后的事了。赌上我SAA的名号，只要我还");
	outtextxy(224, 770, L"能动，什么人都别想动你一根头发！");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（笑）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"谢谢你，SAA。但是真到了那个时候，我会命令你和Iris逃跑，毕竟你们不是他们的目");
	outtextxy(224, 770, L"标。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你——");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你真是个奇怪的人。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"是吗？有时候我自己也这么想。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L" Iris沉默了一会。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……有什么需要我帮忙的吗？");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"可能我真的需要你的帮助。SAA提到有一些数据存在亚当博士的私人电脑里，需要去");
	outtextxy(224, 770, L"他的房间才能读取。我们之前试过进入博士的房间——请见谅——但是没用。SAA打");
	outtextxy(224, 800, L"不开你加密过的房门……");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"啊啊啊！别说了！太丢脸了——作为Super Assistant Android的最新型号我居然无法");
	outtextxy(224, 770, L"破解区区旧版PLA的密码，如果传出去了我们肯定要滞销了——");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（打断）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"——所以我们需要你的帮助。Iris，请帮我们打开亚当博士的房间吧。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我拒绝。博士生前不允许任何人进入他的房间——");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我知道，但是他现在死了！他已经不再是我的管理员了，也不是你的了。我们没有");
	outtextxy(224, 770, L"必要按照他的规定去做了！");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华是你的管理员，不是我的。他无权命令我做什么。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"所以这是我的请求。Iris，请你帮帮我们，这些数据真的很重要。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华与黑发的机器少女对视着。在Iris垂下眼睛之前，他从那双蓝色的眼睛中看到");
	outtextxy(224, 770, L"了一闪而过的动摇。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L" Iris拿过爱德华手中的笔，在草稿纸上写下了一串字符。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我用人格担保。你可以过去看着我。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我不会去。父……博士不允许别人进入房间，包括我在内，虽然他死了，但是我不");
	outtextxy(224, 770, L"会违背他的意愿。我就姑且信任你吧。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA（夺过那张草稿纸）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"什么，让我计算量差点过载的居然只是这种东西！可恶，我早该想到的！如果再给");
	outtextxy(224, 770, L"我一次机会我肯定解的出来……");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"跟着SAA走到门口，爱德华突然想起了什么。");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"Iris，如果我刚刚没听错，你好像称呼亚当博士为……？");
	_getch();

	putimage(0, 0, &SCENE304);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"没什么，请你忘了吧。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"亚当博士的房间里。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"所以他的数据真的有用嘛？");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华（叹气）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"博士和我的想法差不多。和我的结果比起来，他调整了几个参数让数值和真实值更");
	outtextxy(224, 770, L"接近，但是对于我们的机器来说，就算是一点误差也可能是致命的。所以老实来说");
	outtextxy(224, 800, L"，就算是一点误差也可能是致命的。所以老实来说，只是给我提供了一点思路……");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"安啦，你做的很好了。亚当博士提出这些可比你花费的时间要长。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"谢谢安慰。唔，也许换个思路会更好一点。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"合上电脑，爱德华下意识地看了看四周。和所有不愿花心思在日常生活上的研究者");
	outtextxy(224, 770, L"一样，亚当博士房间的陈设相当简洁，只有最普通的日用品。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华的目光最后停在了桌子上的一个相框上。出于好奇，他走了过去。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这是一张三个人的合影。看上去是很幸福的一家三口。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"亚当博士年轻的时候明明是个很开朗的人……");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"他想起档案袋里的照片上亚当阴郁的表情，摇了摇头。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那么这两位就是他的妻女了。可惜她们都在三年前那次污染爆发中死去了……等等——");
	outtextxy(224, 770, L"这个孩子——？");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华拿着相框的手有点颤抖；照片上灿烂微笑着的小女孩，她的黑发蓝眼实在太");
	outtextxy(224, 770, L"过熟悉了。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"怎么了？");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我明白了。我全都明白了。难怪她刚刚称呼博士为父亲——难怪我对她的名字有印象！");
	outtextxy(224, 770, L"Iris是博士死去女儿的名字。这样一来就全清楚了……她是博士寄托思念的存在啊。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"——或者可以说PLA0518存在的意义就是成为Iris。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"但是这对她来说太不公平了。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"机器人没有选择自己命运的权利。我也不是自己决定成为助手机器人的，甚至我的");
	outtextxy(224, 770, L"人格都是某位职员恶趣味的产物。但是我只知道我的职责就是无条件地帮助这里需");
	outtextxy(224, 800, L"要帮助的每一个人。这就是我存在的意义。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华放下相框，突然注意到桌子上还有个小磁盘。他刚要伸手去拿，突然想起来");
	outtextxy(224, 770, L"自己对Iris做的保证。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我可以告诉你那是什么。那里面存放的是Iris的人格数据，但是显然现在的PLA0518");
	outtextxy(224, 770, L"并没有搭载这个人格。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"博士最后放弃了让她成为他女儿？");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"差不多。或许你也可以猜猜看，亚当博士一向讨厌与人共事，他为什么要参加“时");
	outtextxy(224, 770, L"间回溯”计划？");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华（猛吸了一口气）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这，这……");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"呃。不好意思，这个我真的不知道——你要知道博士去世第二天我就被关机丢进仓库了");
	outtextxy(224, 770, L"啊！在这之后发生的事，就算我能力再大也不可能知道好吗……不过我被关机之前");
	outtextxy(224, 800, L"好像听到他们试图从她那里得到什么信息。具体是什么我就无缘得知咯。");

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华若有所思地看着桌子上的小磁盘。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"——突然间基地中响起了刺耳的警报声。");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"发生了什么——");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"稍等，我在连接外面的网络同步数据了——可恶！那群恐怖分子，还真来真的啊！");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华（震惊地）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"他们这么快就到基地门口了？");
	_getch();

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"他们没来，但是他们的病毒先来了。该死的，现在必须马上让基地和外面的网络连");
	outtextxy(224, 770, L"接全部切断，不然用不上半个小时，这里的所有功能就会彻底瘫痪！");

	putimage(0, 0, &SCENE501);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" 爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你能切断网络连接吗？");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"主控室");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"啊啊，烦死了！权限需求，又是权限需求——爱德华博士，你还得把磁卡借我用一下——");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你随时都可以取用它。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"谢谢。等一下！这个不行。这个需要的不是磁卡，是你的指纹。你必须亲自来操作");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我……必须我来把这一段指令敲进去？那样半小时早就过了……");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"稍等，我想个办法……");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"有了。我可以这样做！");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"SAA熟练地调出另一个窗口，飞快地敲下一行行代码。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"来试试这个。这也是某位职员的恶趣味，我临时改了一点东西，让它更容易操作一");
	outtextxy(224, 770, L"点。你只需要让这段方块伸长到合适的长度，相应的指令就会生成。我承认这位职");
	outtextxy(224, 800, L"员真的有够无聊，但是现在我们没得选了。看你了，爱德华博士！");

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"好，我尽量。");
	_getch();
	closegraph();
	snakegame();
	closegraph();
	initgraph(1280, 960);
	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……大功告成！现在整个基地和外面的连接彻底断开了。我还需要一点时间来清");
	outtextxy(224, 770, L"理残留的病毒，不过对于我SAA来说完全是小菜一碟！");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你真的很厉害，SAA。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"夸奖的话就不必了，可以的话以后多帮我们的系列做宣传吧……要不是因为这个特");
	outtextxy(224, 770, L"殊时期，SAA系列本来可以成为最畅销的助手机器人的。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"如果有机会的话，一定。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这群家伙搞出来的病毒可真是难缠，要不是我及时察觉，和外界联网的我差点也要");
	outtextxy(224, 770, L"被侵入系统了。最重要的是，他们真的锁定了基地的位置，我们要有大麻烦了！");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那种事到那一天再说吧。");
	_getch();

	putimage(0, 0, &SCENE602);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"  清澈的机械女音");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……发现入侵者。");
	_getch();

	putimage(0, 0, &SCENE602);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华回过头，看到Iris站在主控室门口。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" Iris（无感情）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"PLA0518发现入侵者。马上采取驱逐措施。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你在说什么，Iris——");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"砰！");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"子弹擦过爱德华肩头。刚刚扣下扳机的Iris再次举枪瞄准了爱德华的头部。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"SAA挡在了爱德华面前。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"SAA，我命令你不许为我赴死！");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华博士，请放心。对于这一点我有自信，她绝对打不出子弹。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"话音刚落，Iris扣下扳机，但是就像SAA所预料的，什么也没有发生。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"SAA趁机一把拽起爱德华，从Iris身边冲出了主控室。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（上气不接下气）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你怎么知道枪里只有一颗子弹？");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这枪是亚当博士自杀用的，当时从他的遗体里取出了五颗子弹，我记得很清楚。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"还有，Iris这是怎么了？为什么我们会被当成入侵者？");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"想想吧，爱德华博士，病毒过来的时候她毫不知情，还在连接外面的网络——所以我说");
	outtextxy(224, 770, L"PLA的系统早该更新换代了。PLA0518，或者说Iris，她的系统被病毒入侵了！");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"（正在读取PLA0518的数据库……）");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"（正在生成图像……载入完毕。）");
	_getch();

	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"已经是凌晨1：15了。Iris站在亚当的房间门口，注视着台灯下奋笔疾书的博士。");
	_getch();

	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"亚当完全没有注意到身后的Iris。他完全沉浸在自己的世界里，一面计算一面自言自");
	outtextxy(224, 770, L"语着什么。");
	_getch();

	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"亚当");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"不过这可真是个疯狂的想法。让时间回流，放在五十年前，科幻小说都不敢这么写");
	outtextxy(224, 770, L"吧？敢想出这种办法的人也一定是一群疯子。不过疯子又怎么样呢？只要还能让我");
	outtextxy(224, 800, L"见到我的女儿，就算要我和杀人犯共事也无所谓。");
	_getch();

	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"亚当");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"总之先把这部分问题解决……");
	_getch();



	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris（低声）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"父亲，很晚了，您该休息了。");
	_getch();

	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"亚当回过头，看到门口站着的Iris之后，不耐烦地挥了挥手，又回身埋头于面前的工");
	outtextxy(224, 770, L"作中。");

	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"亚当");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"把你家政机器人的那套收起来，别在我工作的时候打扰我。");
	_getch();

	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我来提醒您，明天技术部的人要送数据化的模拟人格过来。");
	_getch();

	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"亚当");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你说什么？哦，随便放到什么地方吧。只要时间回流，这该死的污染就不会出现，");
	outtextxy(224, 770, L"我的女儿就还能陪在我身边，我也不用把你当成她的替代品了。这份数据对我而");
	outtextxy(224, 800, L"言已经没有价值了。");
	_getch();

	putimage(0, 0, &SCENE502);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……我明白了，父亲。");
	_getch();
}

void chapter3()
{
	initgraph(1280, 960);
	IMAGE SCENE103;
	loadimage(&SCENE103, L"scene1-03.jpg");
	IMAGE SCENE104;
	loadimage(&SCENE104, L"scene1-04.jpg");
	IMAGE SCENE102;
	loadimage(&SCENE102, L"scene1-02.jpg");
	IMAGE SCENE105;
	loadimage(&SCENE105, L"scene1-05.jpg");
	IMAGE SCENE601;
	loadimage(&SCENE601, L"scene6-01.jpg");

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"主控室附近的一条走廊里。");
	_getch();



	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我来提醒您，明天技术部的人要送数据化的模拟人格过来。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我当然不会眼看着她被病毒入侵，不过这是一方面。刚刚我在亚当博士的房间里有");
	outtextxy(224, 770, L"一点其他的想法，如果没有Iris清醒状态下的配合是做不到的。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"也就是说当务之急是让她清醒过来？这件事可以交给我。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（警惕地）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"SAA，你要做什么？");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L" SAA（不假思索地）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"先暴力制服她，然后把我的系统和她强行对接。虽然这种办法有一定风险，但是目");
	outtextxy(224, 770, L"前也只能这么做了。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你千万别这么做，万一你也被病毒入侵了，我可就真的孤立无援了。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那，你要怎么办？");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"听我说，SAA。我的推断可能有不成熟的地方，或许还有点孤注一掷，但是这可能关");
	outtextxy(224, 770, L"系到全人类的命运。我们也许应该试试。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"全人类？你的想法和时光机有关？");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"是的。我想我知道他们想从Iris身上得到什么了——作为亚当博士留下的会思考、有存储");
	outtextxy(224, 770, L"功能的遗物，Iris可能带有某种重要的信息——这也是为什么她拒绝透露自己知道的一切");
	outtextxy(224, 800, L"。她可能不知道博士希望她保守什么秘密，于是她决定隐瞒她知道的所有信息。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"听起来有点道理。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"博士留下来的重要信息，应该就是他这些年的研究成果。能让数据部采用这么……");
	outtextxy(224, 770, L"不人道的手段也要得到的东西，我大胆地推测一下，亚当博士很有可能已经得到他");
	outtextxy(224, 800, L"研究的最终答案了。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"也就是说，只要得到这部分数据，时光机遇到的最大难题就能解决了？");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"至少我是这么认为的。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"但是按照PLA0518自己的说法，数据部看样子已经尝试过很多办法了，但是显然一无所获");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我认为这个答案不在Iris目前的存储里。从房间的布置来看，博士是一个不会乱放东");
	outtextxy(224, 770, L"西的人，但是Iris的人格数据磁盘却被很随意地放在了桌子上。我觉得这是他有意而");
	outtextxy(224, 800, L"为之的。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"好吧，我明白你的意思了。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"博士最后还是把选择权交到了Iris手上。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"哈，但是他应该没想到他的这点心思被他的后继者参透了。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（笑了一下）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"所以现在我们需要兵分两路，我来牵制Iris的行动，你去拿磁盘。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"什么？你疯了？怎么看都是我去牵制她才比较合适吧！她就算是攻击力较弱的私人");
	outtextxy(224, 770, L"轻量化机器人，解决你也轻而易举……");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"咳，说来很惭愧，我之前从来没来过主控室，你让我去拿磁盘，我会迷路的。而且");
	outtextxy(224, 770, L"借用你之前的话，我觉得Iris不会攻击我，“对于这一点我有自信”。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……必须这样吗？");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这是命令。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那你千万活到我回来的时候啊，爱德华博士。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"放心，在污染没有彻底消除之前，我不会随随便便死掉。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华目送SAA的身影消失在走廊拐弯处。");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"发现驱逐目标");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（苦笑） ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你到的比我想象的还快，Iris。");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……进行驱逐。");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L" Iris一步一步逼近爱德华所在的角落，就像大型食肉动物捕食的前奏。");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"等一下，I……PLA0518，你听我说。");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"黑发少女停止了行进。此时爱德华可以清楚地看到她被病毒入侵而变为红色的双眼");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我要说的，是亚当博士的事——");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"一瞬间，爱德华确信自己看见Iris的眼睛短暂地变回了蓝色。");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"（果然，病毒对她的控制并不稳定。）");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"很抱歉我向SAA打听了你的事，本来我想等你亲自告诉我的……我知道你对于博士而");
	outtextxy(224, 770, L"言意味着什么，也知道博士对于你而言意味着什么。只有一点，我觉得是亚当博士");
	outtextxy(224, 800, L"还没有来得及传达给你的，所以听我说——");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"他并非只是把你当成他女儿的替代品。他希望你有自己的人格，你做出自己的选择。");
	_getch();

	putimage(0, 0, &SCENE102);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……什么都不是。在他看来我什么都不是——");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"Iris的眼睛又变回红色，伸出右手用力扼住了爱德华的喉咙。");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris（机械地）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"驱逐，必要时可以使用武力。已确认目标危险性。");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（艰难地） ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你知道博士留给了你什么东西吗……咳，那个磁盘……曾经装着你人格数据的磁盘");
	outtextxy(224, 770, L"……现在，那里面装的是全世界的命运……他把全世界的命运交到了你的手上……");
	_getch();

	putimage(0, 0, &SCENE104);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"Iris的手松开了一点。她的眼睛在红色和蓝色之间交替闪烁着。");
	_getch();

	putimage(0, 0, &SCENE105);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"喂，PLA0518，放开爱德华博士，不然我就要以暴制暴了！");
	_getch();

	putimage(0, 0, &SCENE105);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（喘息着） ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"SAA……按照我们之前说好的去做。");
	_getch();

	putimage(0, 0, &SCENE105);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华注视着Iris的双眼。");
	_getch();

	putimage(0, 0, &SCENE105);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"Iris，我想你对这个世界还有一些留恋吧……你一直想拥有自己独立的人格，想要被");
	outtextxy(224, 770, L"承认，想要弄明白许多事……你想要在这个博士不在了的世界上重新找回自己的价值");
	_getch();

	putimage(0, 0, &SCENE105);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"Iris缓缓松开了手。她眼瞳的颜色变换仿佛在进行一场激烈的斗争。");
	_getch();

	putimage(0, 0, &SCENE105);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……谢谢你帮我照顾铃兰。那盆花真的很美，我希望你能看到它绽放的样子。");
	_getch();

	putimage(0, 0, &SCENE105);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"他话音刚落，Iris便倒了下去，爱德华在她的身体落地之前接住了她。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"她强制关机了，为了不伤害到你。你这次还真的赌对了。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你能在她关机期间清除掉病毒吗？");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"刚刚我冒着危险查到了这种病毒的相关资料，照我看这种东西会要了PLA系列的命——长");
	outtextxy(224, 770, L"话短说，我现在清除不了，而且她一会还会被病毒控制着自动开机，还会有大概率");
	outtextxy(224, 800, L"会自毁。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这种病毒究竟会作用于什么地方？");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"虚拟人格与记忆云图。刚就是她把我们错认成入侵者并且暂时性格式化人格的结果");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（望向她手中的磁盘） ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"恰好这两个问题我们都能解决。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"老实说，我没感觉这个小磁盘有多靠谱……不过，我选择相信你。");
	_getch();

	putimage(0, 0, &SCENE103);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"谢谢你的信任。我们得快点，时间不多了——");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"SAA把磁盘接入Iris脑后的插口。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"没有反应吗？");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我试试把她连到一台电脑上。可能还需要后续操作。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"正如SAA所说，在她在电脑上敲入几段指令后，出现了一个操作界面。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"看起来这像是一个拼图？");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"是PLA0518被病毒弄乱的数据库，只要把它整理好，她的人格就能恢复了——可是问题");
	outtextxy(224, 770, L"是这里的数据全乱了，上面还有距离她重启系统的计时，我不敢去猜混乱的后果……");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"最糟糕的会是什么？");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"别！我不想去想。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"但是我们必须试一试，不是吗？这或许需要一点运气……");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华在电脑前坐下来，深吸了一口气。");
	_getch();

	putimage(0, 0, &SCENE601);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华 ");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……Iris，等着我。");
	_getch();
	closegraph();
	jigsaw();

	if (number == 20)
	{
		chapterBE();
	}
	else
	{
		chapterHE();
	}

}

void chapterHE()
{
	initgraph(1280, 960);
	IMAGE SCENE700;
	loadimage(&SCENE700, L"scene7-00.jpg");
	IMAGE SCENE800;
	loadimage(&SCENE800, L"scene8-00.jpg");
	IMAGE SCENE801;
	loadimage(&SCENE801, L"scene8-01.jpg");


	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"（正在重组乱码0001至0297……1841至2054……）");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"（……重组完毕。）");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L" PLA0518，这大概是我第一次称呼你真正的名字吧。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"很抱歉，从今天开始，你就是没有管理员的机器人了。再有半小时，亚当·斯卡诺");
	outtextxy(224, 770, L"将会从这个世界上消失。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"这几年来，支撑我活下去的唯一动力就是这台时光机。我想要回到一切发生之前，");
	outtextxy(224, 770, L"这样我的女儿也不会因为感染而离我而去。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"但是今天的会议上，我才得知我从一开始就错了。已经离去的人不会回来，已经发");
	outtextxy(224, 770, L"生过的事不能改变，这个计划能做到的，是从“现在”以后不会再有人死于污染。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我累了。比起拯救这个没有希望的世界，我更想去天国和妻女重逢。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你是承载着我对Iris的思念诞生的机器人。我曾经试图把你当成她的替代品，但是我");
	outtextxy(224, 770, L"发现你们除了样貌没有相似之处。起初我很失望。但是后来，我渐渐地意识到，你");
	outtextxy(224, 800, L"应该拥有自己的人格，而不是成为我执念的牺牲品。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L" PLA0518，从今天开始你就是独立的个体了。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你有自己判断和选择的权力，你可以去做任何你想做的事。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我已经把我这两年的研究数据和这封邮件放在了那个曾经存储着你人格数据的磁盘");
	outtextxy(224, 770, L"中。至于你要不要打开，什么时候打开，选择权在你手上。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我知道这些数据对整个计划也许有着至关重要的作用，但是这个世界怎么样都与我");
	outtextxy(224, 770, L"无关了。这个世界已经没有任何东西值得我去爱了。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"但是你不一样。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"如果你对这个世界尚有一点留恋的话，那就替我去爱这个世界吧。");
	_getch();

	putimage(0, 0, &SCENE700);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"——亚当");
	_getch();

	putimage(0, 0, &SCENE800);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"今天的天空蓝得近乎奢侈。这是人类三年来不曾见过的颜色，那样的清澈、透亮，");
	outtextxy(224, 770, L"仿佛三年来的阴霾不曾留下任何痕迹。");
	_getch();

	putimage(0, 0, &SCENE800);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"在某座山脚的一处基地门前，站着一男一女两个身影。");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"伊玛");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"我说过我们不应该放弃任何一点可能性，霍克。");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"霍克");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"好吧好吧，我承认这一次你说对了，谁也没想到那个傻小子还真的成功了——");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"伊玛");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"——我们必须承认爱德华身上有很多我们所不具备的优点。");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"霍克");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"或许吧，有时候人傻一点也不全是坏事。");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"伊玛（带着一点嫌弃地）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"麻烦你快点把这支烟抽完。爱德华的庆功宴就快开始了。");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"霍克");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"不光是庆功宴，还是告别宴呢——这小子放弃了科学院提供给他的职位，说什么要带着");
	outtextxy(224, 770, L"机器人去看看外面的世界……");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"伊玛");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……他可能有自己的想法吧。");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"霍克");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"谁知道呢？或许你可以去问问SAA。");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"霍克掐灭了烟头，咧嘴对伊玛笑笑。");
	_getch();

	putimage(0, 0, &SCENE801);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"霍克");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"走吧，去看看我们年轻的英雄，这也许是一个很长的故事，他会讲给我们听的");

	IMAGE ENDIMAGE;
	loadimage(&ENDIMAGE, L"endimage.jpg");
	putimage(0, 0, &ENDIMAGE);
	_getch();
	IMAGE SCENE9;
	loadimage(&SCENE9, L"scene9.jpg");
	putimage(0, 0, &SCENE9);
	_getch();
	exit(0);
}

void chapterBE()
{
	initgraph(1280, 960);
	IMAGE SCENE603;
	loadimage(&SCENE603, L"scene6-03.jpg");

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"次数达到上限，失败了……");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（无力）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"果然我没办法改变什么吗……");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……正在重启系统……");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……驱逐失败。启动自爆程序。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华博士，这里已经不安全了。我牵制她，你快离开这里！");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"可我又能去哪呢？");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"就算你是个路痴，也总知道时光机放在哪里吧？");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"当然，但是——");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"用你之前得到的数据，可以短暂地启动机器，它会把时间随机前调，之前做过测试");
	outtextxy(224, 770, L"，这个时间，至少是十分钟以前。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"你的意思是让我重来一次——");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"哈，你反应还是挺快的嘛！没错，让另一个世界线上的你再做一次选择。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"如果我又失败了呢？");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那就再来一次！你总会有一次成功的。那个时候所有世界线都会收束于一处，这一");
	outtextxy(224, 770, L"切就能迎来真正的终结。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"Iris");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"……距离自爆程序启动还有三十秒。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"爱德华（下定决心）");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"那我就再尝试一次。Iris和这个世界，我都想完好无损地保留下来。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"爱德华转身冲出了房间。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(28, 0, _T("黑体"));
	outtextxy(230, 692, L"SAA");
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"加油，爱德华博士，去再一次与她相遇，再一次找到我，然后再一次拯救这个世界");
	outtextxy(224, 770, L"吧……赌上SAA的名号，无论多少次，我都一定会帮助你，只要你一声令下——");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"轰！！！！！！");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"在爱德华身后，响起了震耳欲聋的爆炸声。他没有回头，只是向前奔跑着，仿佛在");
	outtextxy(224, 770, L"黑暗中追逐着光明。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"于是，在某座山脚的基地中，世界的指针被轻轻拨动了。");
	_getch();

	putimage(0, 0, &SCENE603);
	setcolor(WHITE);
	settextstyle(24, 0, _T("黑体"));
	outtextxy(224, 740, L"在这种无穷无尽的反复之中，那一丝闪烁的希望，像遥不可及又近在咫尺的星光般");
	outtextxy(224, 770, L"，再次指引向下一个轮回。");
	_getch();

	IMAGE ENDIMAGE;
	loadimage(&ENDIMAGE, L"endimage.jpg");
	putimage(0, 0, &ENDIMAGE);
	_getch();
	IMAGE SCENE9;
	loadimage(&SCENE9, L"scene9.jpg");
	putimage(0, 0, &SCENE9);
	_getch();
	exit(0);
}








int MenuReturn;
void RandMap(char map[][3]);
void Game(void);
int instruction(void);
int Menu(void);
void Menufunction(int MenuReturn);
void Shownumbers(char map[][3]);
int Isfinished(char map[][3]);
int number1 = 0;

void jigsaw()
{
	system("color 1E");
	while (1)
	{
		MenuReturn = Menu();
		Menufunction(MenuReturn);
	}
	return;
}

int Menu(void)
{
	int sel = 1;
	int tem = 0;
	char kb;
	system("cls");
	printf("  数字华容道    \n\n\n");
	printf("->开始游戏<-\n  游戏说明  \n  退出游戏  \n");
	do {
		kb = _getch();
		switch (kb)
		{
		case 'w': tem--; sel += tem; break;
		case 's': tem++; sel += tem; break;
		default: NULL; break;
		}
		tem = 0;
		if (sel == 0)
		{
			sel = 3;
		}
		if (sel == 4)
		{
			sel = 1;
		}
		system("cls");
		printf("  数字拼图\n\n\n");
		switch (sel)
		{
		case 1: printf("->开始游戏<-\n  游戏说明  \n  退出游戏  \n"); break;
		case 2: printf("  开始游戏  \n->游戏说明<-\n  退出游戏  \n"); break;
		case 3: printf("  开始游戏  \n  游戏说明  \n->退出游戏-<\n"); break;
		default: return-1; break;
		}
	} while (kb != '\r');

	return sel;
}

void Menufunction(int MenuReturn)
{
	int retu;
	switch (MenuReturn)
	{
	case 1: Game(); break;
	case 2: retu = instruction(); break;
	case 3: exit(0); break;
	case -1: printf("发生未知错误！\n");
	}

}

void Shownumbers(char map[][3])
{
	int i, j;
	system("cls");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2c", map[i][j]);
		}
		printf("\n");

	}
	printf("\n");
	printf("移动次数：%d    ", number1);
	return;
}

void MoveNumber(char map[][3], int* Crx, int* Cry)
{
	enum { UP, DOWN, LEFT, RIGHT };
	int kb = 0;
	int dx = 0, dy = 0;
	switch (_getch())
	{
	case 'w':dy--; kb = UP; number1++; break;
	case 's':dy++; kb = DOWN; number1++; break;
	case 'a':dx--; kb = LEFT; number1++; break;
	case 'd':dx++; kb = RIGHT; number1++; break;
	default:NULL; break;
	}
	if (kb == UP && *Cry + 1 <= 2)
	{
		map[*Cry][*Crx] = map[*Cry + 1][*Crx];
		map[*Cry += 1][*Crx] = ' ';
	}
	if (kb == DOWN && *Cry - 1 >= 0)
	{
		map[*Cry][*Crx] = map[*Cry - 1][*Crx];
		map[*Cry -= 1][*Crx] = ' ';
	}
	if (kb == LEFT && *Crx + 1 <= 2)
	{
		map[*Cry][*Crx] = map[*Cry][*Crx + 1];
		map[*Cry][*Crx += 1] = ' ';
	}
	if (kb == RIGHT && *Crx - 1 >= 0)
	{
		map[*Cry][*Crx] = map[*Cry][*Crx - 1];
		map[*Cry][*Crx -= 1] = ' ';
	}

	return;
}

void RandMap(char map[][3])
{

	int i, j, k, n = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 8; i++)
	{
		map[0][i] = '1' + i;
	}
	while (n < 99)
	{
		int tem;
		j = rand() % 8;
		k = rand() % 8;
		if (k - j == 1 || j - k == 1 || k - j == 3 || j - k == 3)
		{
			continue;
		}
		tem = map[0][k];
		map[0][k] = map[0][j];
		map[0][j] = tem;
		n++;
	}


	map[2][2] = ' ';

}

int instruction(void)
{
	int judje = 0;
	system("cls");
	printf("点击开始游戏，程序会随机生成一个数阵，例如\n"
		"314\n286\n75 \n点击wasd移动数字，直至\n123\n456\n78 \n则胜出\n注意:\n一旦移动次数超过200步，\n你将无法修复Iris的数据库！\n后果可能不堪设想！\n");
	printf("返回菜单吗？\t   =====   y/n\n");
	do {
		int ch = getchar();
		if (ch == 'y')
		{
			return 1;
		}
		if (ch == 'n')
		{
			judje = 1;
		}
	} while (judje == 1);
}

int Isfinished(char map[][3])
{
	int i;
	int j = 0;
	for (i = 0; i < 8; i++)
	{
		if (map[0][i] == '1' + i)
			j++;
	}

	if (j == 8)
	{
		return 1;
	}
	else
	{
		return 0;
	}


}

void Game(void)
{
	char Map[3][3] = { 0 };
	int Crx = 2;
	int Cry = 2;
	RandMap(Map);
	Shownumbers(Map);
	printf("任意键开始游戏！！\n");
	_getch();
	unsigned int t1 = time(NULL);
	while (1)
	{
		MoveNumber(Map, &Crx, &Cry);
		Shownumbers(Map);
		unsigned int t2 = time(NULL);
		if (Isfinished(Map))
		{
			printf("胜利!");
			printf("按任意键退出...");
			_getch;
			chapterHE();
		}
		if (number1 == 200)
		{
			printf("游戏失败！");
			_getch;
			chapterBE();
		}

	}
}








typedef struct Position
{
	int x;
	int y;
}Pos;

Pos snake[200] = {};
Pos array;
Pos food;
long length = 1;
int score = 0;

void creatfood()
{
	while (true)
	{
		int ok = 0;
		srand((unsigned)time(NULL));
		food.x = rand() % 80 * 5 + 100;
		food.y = rand() % 50 * 5 + 100;
		for (int i = 0; i < length; i++)
		{
			if (snake[i].x == 0 && snake[i].y == 0)
				continue;
			if (fabs(snake[i].x - food.x) <= 10 && fabs(snake[i].y - food.y) <= 10)
				ok = -1;
			break;
		}
		if (ok == 0)
			return;
	}
}

void initsnakegame()
{
	initgraph(1280, 960);
	line(0, 0, 960, 0);
	line(0, 720, 960, 720);
	line(0, 0, 0, 720);
	line(960, 0, 960, 720);
	srand((unsigned)time(NULL));
	snake[0].x = rand() % 80 * 5 + 100;
	snake[0].y = rand() % 50 * 5 + 100;
	array.x = pow(-1, rand());
	array.y = 0;
	creatfood();
	setcolor(WHITE);
	settextstyle(26, 0, _T("黑体"));
	outtextxy(1000, 300, L"Move:W A S D");
	outtextxy(1000, 340, L"Don't bite yourself!");
}

void getkeyboard()
{
	if (_kbhit())
		switch (_getch()/*这里不能用getchar()*/)
		{
		case 'a':
			if (array.x != 1 || array.y != 0)
			{
				array.x = -1;
				array.y = 0;

			}
			break;
		case 'd':
			if (array.x != -1 || array.y != 0)
			{
				array.x = 1;
				array.y = 0;
			}
			break;
		case 'w':
			if (array.x != 0 || array.y != 1)
			{
				array.x = 0;
				array.y = -1;
			}
			break;
		case 's':
			if (array.x != 0 || array.y != -1)
			{
				array.x = 0;
				array.y = 1;
			}
			break;
		}
}

void move()
{
	setcolor(BLACK);
	rectangle(snake[length - 1].x - 5, snake[length - 1].y - 5, snake[length - 1].x + 5, snake[length - 1].y + 5);

	for (int i = length - 1; i > 0; i--)
	{
		snake[i].x = snake[i - 1].x;
		snake[i].y = snake[i - 1].y;
	}
	snake[0].x += array.x * 10;
	snake[0].y += array.y * 10;
	if (snake[0].x >= 960 && snake[0].x <= 5 && snake[0].y >= 720 && snake[0].y >= 5)
		snake[0].x = 0;
	else if (snake[0].x <= 0)
		snake[0].x = 960;
	else if (snake[0].y >= 720)
		snake[0].y = 0;
	else if (snake[0].y <= 0)
		snake[0].y = 720;
}

void eatfood()
{
	if (fabs(snake[0].x - food.x) <= 5 && fabs(snake[0].y - food.y) <= 5)
	{
		setcolor(BLACK);
		circle(food.x, food.y, 5);
		creatfood();

		length += 1;
		for (int i = length - 1; i > 0; i--)
		{
			snake[i].x = snake[i - 1].x;
			snake[i].y = snake[i - 1].y;
		}
		snake[0].x += array.x * 10;
		snake[0].y += array.y * 10;
		score = score + 10;
	}
}

void draw()
{
	setcolor(BLUE);
	for (int i = 0; i < length; i++)
	{
		rectangle(snake[i].x - 5, snake[i].y - 5, snake[i].x + 5, snake[i].y + 5);
	}
	setcolor(RED);
	circle(food.x, food.y, 5);
	Sleep(100);
}

void eatitself()
{
	if (length == 1)
		return;
	for (int i = 1; i < length; i++)
		if (fabs(snake[i].x - snake[0].x) <= 5 && fabs(snake[i].y - snake[0].y) <= 5)
		{
			Sleep(1000);
			outtextxy(250, 200, L"GAME OVER !");
			_getch();
			closegraph();
		}
}

void endthegame()
{
	setcolor(WHITE);
	settextstyle(40, 0, _T("黑体"));
	outtextxy(434, 378, L"Congratulations!");
	_getch();
	closegraph();
}

void snakegame()
{
	initsnakegame();
	_getch();
	while (score <= 90)
	{
		getkeyboard();
		move();
		eatfood();
		draw();
		eatitself();
	}
	endthegame();
	return;
}








#define KEY_DOWN(vk_c)(GetAsyncKeyState(vk_c)&0x8000)

typedef struct position
{
	int x;
	int y;
}posType;

int index;
void initballgame();
void gamebegin();
void gameprocess();
void closegame();
void drawcursor(posType cur, COLORREF c1);
void getsamecolorballs(posType cur, COLORREF c1);
int issamecolor(posType cur, COLORREF c1);
void ballsfall();

COLORREF colorArr[6] = { RGB(200,0,0),RGB(0,200,0),RGB(0,0,200),RGB(200,200,0),RGB(200,0,200),RGB(0,200,200) };
posType cur;
posType ballsArr[180];

void cancellation()
{
	initballgame();
	gamebegin();
	gameprocess();
	closegame();
}

void initballgame()
{
	initgraph(1000, 700);
	setcolor(WHITE);
	settextstyle(18, 0, _T("黑体"));
	outtextxy(20, 300, L"两个及以上同色小球");
	outtextxy(20, 330, L"贴在一起即可消除");
	setcolor(WHITE);
	settextstyle(18, 0, _T("黑体"));
	outtextxy(750, 350, L"用↑.↓.←.→控制光标移动");
	outtextxy(750, 400, L"按Space消除");
}

void closegame()
{
	_getch();
	closegraph();
}

void gamebegin()
{
	setlinecolor(RGB(50, 50, 50));
	setlinestyle(PS_SOLID, 10);
	rectangle(255, 45, 745, 655);
	srand((unsigned)time(NULL));
	setlinestyle(PS_SOLID, 1);
	for (int x = 280; x < 740; x += 40)
	{
		for (int y = 70; y < 650; y += 40)
		{
			COLORREF c1 = colorArr[rand() % 6];
			setfillcolor(c1);
			setlinecolor(c1);
			fillcircle(x, y, 18);
		}
	}
	cur.x = 480;
	cur.y = 390;
	drawcursor(cur, RGB(255, 255, 255));
}

void gameprocess()
{
	int score = 0;
	for (int i = 600; i > 0; i--)
	{
		if (KEY_DOWN(VK_UP) && cur.y > 70)
		{
			drawcursor(cur, BLACK);
			cur.y -= 40;
			drawcursor(cur, WHITE);
		}
		else if (KEY_DOWN(VK_DOWN) && cur.y < 630)
		{
			drawcursor(cur, BLACK);
			cur.y += 40;
			drawcursor(cur, WHITE);
		}
		else if (KEY_DOWN(VK_LEFT) && cur.x > 280)
		{
			drawcursor(cur, BLACK);
			cur.x -= 40;
			drawcursor(cur, WHITE);
		}
		else if (KEY_DOWN(VK_RIGHT) && cur.x < 720)
		{
			drawcursor(cur, BLACK);
			cur.x += 40;
			drawcursor(cur, WHITE);
		}
		else if (KEY_DOWN(VK_RETURN) || KEY_DOWN(VK_SPACE))
		{
			getsamecolorballs(cur, getpixel(cur.x, cur.y));
			if (index > 1)
			{
				for (int k = 0; k < index; k++)
				{
					setfillcolor(BLACK);
					setlinecolor(BLACK);
					fillcircle(ballsArr[k].x, ballsArr[k].y, 18);
				}
				Sleep(500);
				ballsfall();
			}
			index = 0;
		}
		Sleep(100);
	}
	cleardevice();
	settextcolor(RGB(255, 0, 0));
	settextstyle(80, 0, _T("黑体"));
	outtextxy(300, 300, L"Game over");
	Sleep(500);
}

void drawcursor(posType cur, COLORREF c1)
{
	setlinecolor(c1);
	rectangle(cur.x - 20, cur.y - 20, cur.x + 20, cur.y + 20);
}


void getsamecolorballs(posType cur, COLORREF c1)
{
	ballsArr[index].x = cur.x;
	ballsArr[index].y = cur.y;
	index++;
	posType tempos;
	for (int k = 0; k < 4; k++)
	{
		switch (k)
		{
		case 0:		tempos.x = cur.x;
			tempos.y = cur.y - 40;
			break;
		case 1:		tempos.x = cur.x;
			tempos.y = cur.y + 40;
			break;
		case 2:		tempos.x = cur.x - 40;
			tempos.y = cur.y;
			break;
		case 3:		tempos.x = cur.x + 40;
			tempos.y = cur.y;
			break;
		}
		if (issamecolor(tempos, c1))
		{
			getsamecolorballs(tempos, c1);
		}
	}
}

int issamecolor(posType cur, COLORREF c1)
{
	if (getpixel(cur.x, cur.y) != c1)
	{
		return 0;
	}
	else
	{
		for (int k = 0; k < index; k++)
		{
			if (ballsArr[k].x == cur.x && ballsArr[k].y == cur.y)
			{
				return 0;
			}
		}
		return 1;
	}
}

void rankballs()
{
	int i, j;
	posType temp;
	for (i = 0; i < index; i++)
	{
		for (j = 0; j < index - i - 1; j++)
		{
			if (ballsArr[j].y > ballsArr[j + 1].y)
			{
				temp = ballsArr[j];
				ballsArr[j] = ballsArr[j + 1];
				ballsArr[j + 1] = temp;
			}
		}
	}
}

void ballsfall()
{
	for (int i = 0; i < index; i++)
	{
		rankballs();
		for (int k = ballsArr[i].y; k > 70; k -= 40)
		{
			setfillcolor(getpixel(ballsArr[i].x, k - 40));
			setlinecolor(getpixel(ballsArr[i].x, k - 40));
			fillcircle(ballsArr[i].x, k, 18);
		}
		COLORREF c1 = colorArr[rand() % 6];
		setfillcolor(c1);
		setlinecolor(c1);
		fillcircle(ballsArr[i].x, 70, 18);
	}
}
