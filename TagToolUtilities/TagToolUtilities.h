// TagToolUtilities.h

#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace TagTool {

	namespace Utilities
	{
		public ref class DirectXUtilities {
		public:

			ref struct MacroDefine {
				String^ Name;
				String^ Definition;
			};



			static array<Byte>^ AssemblePCShader(String^ source);
			static bool CompilePCShader(
				String^ SrcData, 
				array<MacroDefine^>^ Defines, 
				String^ Include, 
				String^ FunctionName, 
				String^ Profile, 
				UInt32 flags,
				[Out] array<Byte>^% Shader,
				[Out] String^% ErrorMsgs,
				[Out] String^% ConstantTable
			);
			static String^ DisassemblePCShader(array<Byte>^ data);
		};
	}
}
