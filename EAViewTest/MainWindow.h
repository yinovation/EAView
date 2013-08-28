#pragma once

namespace EAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: EAViewEngine::EAViewGlobe^  eaViewGlobe1;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->eaViewGlobe1 = (gcnew EAViewEngine::EAViewGlobe());
			this->SuspendLayout();
			// 
			// eaViewGlobe1
			// 
			this->eaViewGlobe1->Location = System::Drawing::Point(13, 13);
			this->eaViewGlobe1->Name = L"eaViewGlobe1";
			this->eaViewGlobe1->Size = System::Drawing::Size(259, 237);
			this->eaViewGlobe1->TabIndex = 0;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->eaViewGlobe1);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}