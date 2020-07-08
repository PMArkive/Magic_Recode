#pragma once

void Redirected_Chat_Print_Formatted_Global_Offensive(void* Chat, void* Unknown_Parameter_1, void* Unknown_Parameter_2, void* Unknown_Parameter_3, char* Message, ...)
{
	va_list Variadic_Parameters;

	va_start(Variadic_Parameters, Message);

	char Formatted_Message[4096];

	vsnprintf(Formatted_Message, sizeof Formatted_Message, Message, Variadic_Parameters);

	Handle_Message(Formatted_Message);

	va_end(Variadic_Parameters);

	using Chat_Print_Formatted_Type = void(__cdecl*)(void* Chat, void* Unknown_Parameter_1, void* Unknown_Parameter_2, void* Unknown_Parameter_3, char* Message);

	Chat_Print_Formatted_Type((unsigned __int32)Original_Chat_Print_Formatted_Caller_Location)(Chat, Unknown_Parameter_1, Unknown_Parameter_2, Unknown_Parameter_3, Formatted_Message);
}