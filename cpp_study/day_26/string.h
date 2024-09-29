using namespace std;

namespace simulation {
    class string {
    public:
        string(): _str(nullptr) {
        }

        string(char *str): _str(new char[strlen(str) + 1]) {
            ;
        };

        size_t size() {
            return strlen(_str);
        }

        char &operator[](int i) {
            return _str[i];
        }

        //堆的特点是 自由管理
    private
    :
        char *_str;
    };

    void test_string1() {
        string s1("hello");
        string s2;


        for (size_t i = 0; i < s1.size(); i++) {
            cout << s1[i] << " ";
        }
        cout << endl;
    }
}

//常量，代码指令都在代码段
