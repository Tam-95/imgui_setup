//
// Created by Alex on 15.11.20.
//

#ifndef IMGUI_SETUP_CONSOLEWINDOW_HPP
#define IMGUI_SETUP_CONSOLEWINDOW_HPP

#include <imgui.h>

#include "base/Window.hpp"
#include "../../types.hpp"


class ConsoleWindow: public Window {
public:
    ConsoleWindow();
    ~ConsoleWindow();
    void render();
    void on_submit(console_submit_funct_t callback);
    void add_log(std::string msg, ...);

private:
    char                  input_buf[256];
    ImVector<char*>       items;
    ImVector<const char*> commands;
    ImVector<char*>       history;
    int                   historyPos;    // -1: new line, 0..History.Size-1 browsing history.
    ImGuiTextFilter       filter;
    bool                  autoScroll;
    bool                  scrollToBottom;

    console_submit_funct_t on_submit_fn;

    void clear_log();
    void edit_callback(ImGuiInputTextCallbackData* data);
    void exec_command(const char* command_line);
};

#endif //IMGUI_SETUP_CONSOLEWINDOW_HPP
