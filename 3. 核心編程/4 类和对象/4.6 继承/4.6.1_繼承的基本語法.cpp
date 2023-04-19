#include<iostream>
using namespace std;

//公共頁面
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	void left()
	{
		cout << "Java,Python,C++...(公共分类列表)" << endl;
	}
};

//繼承的好處是減少重複的代碼
//語法：class 子類: public 父類
//子類 也稱為 派生類
//父類 也稱為 基類

//Java頁面
class Java: public BasePage
{
public:
    void content(){
        cout<<"這是Java頁面"<<endl;
    }
};

//Python頁面
class Python: public BasePage
{
public:
    void content(){
        cout<<"這是Python頁面"<<endl;
    }
};

//CPP頁面
class CPP: public BasePage
{
public:
    void content(){
        cout<<"這是CPP頁面"<<endl;
    }
};


void test01()
{
	//Java页面
	cout << "Java下载视频页面如下： " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------" << endl;

	//Python页面
	cout << "Python下载视频页面如下： " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------" << endl;

	//C++页面
	cout << "C++下载视频页面如下： " << endl;
	CPP cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();

}

int main() {

	test01();

	system("pause");

	return 0;
}