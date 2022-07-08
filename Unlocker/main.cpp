#include <windows.h>
#include <iostream> //dont need this
#include <vector>
#include <string>

int main() {
    std::vector<std::wstring> subkeys;
    LPCWSTR current;
    HKEY key;

    std::wstring tempw;
    std::string temp;

    // std::vector<std::string> subkeys;
    RegOpenKey(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Power\\User\\PowerSchemes", &key);
    DWORD cSubKeys, maxSubkeyLen;
    RegQueryInfoKey(key, NULL, NULL, NULL, &cSubKeys, &maxSubkeyLen, NULL, NULL, NULL, NULL, NULL, NULL);

    for (int i = 0; i < cSubKeys; i++) {
        RegEnumKey(key, i, (LPCWSTR)current, maxSubkeyLen);
        // tempw = current;
        // temp = std::string(tempw.begin(), tempw.end());
        subkeys.push_back(current);

        std::cout << std::string(subkeys[i]) << std::endl;
    }

    for (int i = 0; i < cSubKeys; i++) {
        // RegOpenKey(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Power\\User\\PowerSchemes", &key);
        // DWORD cSubKeys, maxSubkeyLen;
        // RegQueryInfoKey(key, NULL, NULL, NULL, &cSubKeys, &maxSubkeyLen, NULL, NULL, NULL, NULL, NULL, NULL);
        
    }

    std::cout << subkeys.size() << std::endl;

    
    //unlock options
    return 0;
}