void ToggleButton(const char* str_id, bool* v)
{ 
ImVec2 p = ImGui::GetCursorScreenPos(); 
ImDrawList* draw_list = ImGui::GetWindowDrawList();
float height = ImGui::GetFrameHeight();
float width = height * 1.55f;
float radius = height * 0.50f;
 if (ImGui::InvisibleButton(str_id, ImVec2(width, height)))
   *v = !*v;
ImU32 col_bg;
if (ImGui::IsItemHovered())
	  col_bg = *v ? IM_COL32(145 + 20, 211, 68 + 20, 255) : IM_COL32(218 - 20, 218 - 20, 218 - 20, 255);
 else
	   col_bg = *v ? IM_COL32(145, 211, 68, 255) : IM_COL32(218, 218, 218, 255);
  draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), col_bg, height * 0.5f);
   draw_list->AddCircleFilled(ImVec2(*v ? (p.x + width - radius) : (p.x + radius), p.y + radius), radius - 1.5f, IM_COL32(255, 255, 255, 255));
}


void EZBYPSS()
{
ImGui::SetNextWindowSize({186.f,160.f});

ImGui::Begin( "FiveM - Scripthook");
ImGui::SetCursorPos({5.f,106.f});
ToggleButton("toggle0", the_bool);
ImGui::SetCursorPos({39.f,108.f});
ImGui::Text("Scripthook Bypass");
ImGui::SetCursorPos({7.f,87.f});
ImGui::Text("Adhesive BYPASSED");


ImGui::End();
}


