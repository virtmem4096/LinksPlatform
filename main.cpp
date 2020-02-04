#include <iostream>
#include <string.h>
#include "Links/links.hpp"


int main(int argc, char* argv[]){
    Links links(argv[1]);
    std::cout << "Opened " << argv[1] << std::endl;
    const char exit[] = "exit";
    const char newlink[] = "nl";
    const char getlink[] = "gl";
    const char linkcount[] = "lc";
    while(1) {
        char *answer;
        std::cin >> answer;
        if(strncmp(newlink, answer, sizeof(newlink)) == 0) {
            link_t Source = 0, Target = 0;
            std::cin >> Source >> Target;
            Link* link = links.Create();
            std::cout << "Link Created: (" << Target << "," << Source << ") Index: " << links.GetIndexByLink(link);
        }
        else if(strncmp(getlink, answer, sizeof(getlink)) == 0) {
            link_t index;
            std::cin >> index;
            Link *link = links.GetLinkByIndex(index);
            std::cout << index << ": " << link->Source << " " << link->Target << std::endl;
        }
        else if(strncmp(linkcount, answer, sizeof(linkcount)) == 0) {
            std::cout << "Link count: " << links.GetLinkCount() << std::endl;
        }
        else if(strncmp(exit, answer, sizeof(exit)) == 0) {
            break;
        }
    }
    links.Close();
    return 0;
}
