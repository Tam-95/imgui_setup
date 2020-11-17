//
// Created by Alex on 15.11.20.
//

#include "imgui.h"

#include "ConsoleWindow.hpp"
#include "../../config.hpp"

ConsoleWindow::ConsoleWindow(): Window() {}

void ConsoleWindow::render() {
    ImGui::SetNextWindowPos(ImVec2(820, 570), ImGuiCond_None);
    ImGui::SetNextWindowSize(ImVec2(1030, 430), ImGuiCond_None);

    ImGui::Begin(WIN_TITLE_CONSOLE, NULL, FLAGS_CONSOLE);
    after_imgui_begin(WIN_TITLE_CONSOLE);

    ImGui::End();
}