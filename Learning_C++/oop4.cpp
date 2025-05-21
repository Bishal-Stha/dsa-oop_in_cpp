#include<iostream>
#include<cwchar>
#include<iomanip>
using namespace std;
int main()
{
    float pi = 3.1415f;
    float x = 12244.52526;
    wchar_t ch = L'∑';
    std::wcout<<ch;
    wchar_t wideChar = L'é';
  wchar_t wideString[] = L"你好，世界";

  std::wcout << L"Wide character: " << wideChar << std::endl;
  std::wcout << L"Wide string: " << wideString << std::endl;
  std::wcout << L"Length of wide string: " << std::wcslen(wideString) << std::endl;



    return 0;
}

/*
#include <iostream>
#include <cwchar>

int main() {
  wchar_t wideChar = L'é';
  wchar_t wideString[] = L"你好，世界";

  std::wcout << L"Wide character: " << wideChar << std::endl;
  std::wcout << L"Wide string: " << wideString << std::endl;
  std::wcout << L"Length of wide string: " << std::wcslen(wideString) << std::endl;

  return 0;
}
*/