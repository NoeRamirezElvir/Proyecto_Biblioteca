#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaPersona
	/// </summary>
	public ref class frmListaPersona : public System::Windows::Forms::Form
	{
	public:
		frmListaPersona(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmListaPersona()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblListaPersona;
	public: System::Windows::Forms::DataGridView^ dgvListaPersona;
	private:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIDpersona;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombrePersona;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colApellidoPersona;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colGeneroPersona;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEdad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIdentificacionPersona;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTelefonoPersona;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colTipoPersona;

	public:







	private:

	protected:





























	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaPersona::typeid));
			this->lblListaPersona = (gcnew System::Windows::Forms::Label());
			this->dgvListaPersona = (gcnew System::Windows::Forms::DataGridView());
			this->colIDpersona = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombrePersona = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellidoPersona = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colGeneroPersona = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colEdad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colIdentificacionPersona = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTelefonoPersona = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipoPersona = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaPersona))->BeginInit();
			this->SuspendLayout();
			// 
			// lblListaPersona
			// 
			this->lblListaPersona->AutoSize = true;
			this->lblListaPersona->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblListaPersona->ForeColor = System::Drawing::Color::Black;
			this->lblListaPersona->Location = System::Drawing::Point(234, 28);
			this->lblListaPersona->Name = L"lblListaPersona";
			this->lblListaPersona->Size = System::Drawing::Size(411, 36);
			this->lblListaPersona->TabIndex = 0;
			this->lblListaPersona->Text = L"Lista de personas registradas";
			// 
			// dgvListaPersona
			// 
			this->dgvListaPersona->BackgroundColor = System::Drawing::SystemColors::GrayText;
			this->dgvListaPersona->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaPersona->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->colIDpersona,
					this->colNombrePersona, this->colApellidoPersona, this->colGeneroPersona, this->colEdad, this->colIdentificacionPersona, this->colTelefonoPersona,
					this->colTipoPersona
			});
			this->dgvListaPersona->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvListaPersona->Location = System::Drawing::Point(22, 92);
			this->dgvListaPersona->Name = L"dgvListaPersona";
			this->dgvListaPersona->Size = System::Drawing::Size(844, 437);
			this->dgvListaPersona->TabIndex = 1;
			// 
			// colIDpersona
			// 
			this->colIDpersona->HeaderText = L"ID";
			this->colIDpersona->Name = L"colIDpersona";
			// 
			// colNombrePersona
			// 
			this->colNombrePersona->HeaderText = L"Nombre";
			this->colNombrePersona->Name = L"colNombrePersona";
			// 
			// colApellidoPersona
			// 
			this->colApellidoPersona->HeaderText = L"Apellido";
			this->colApellidoPersona->Name = L"colApellidoPersona";
			// 
			// colGeneroPersona
			// 
			this->colGeneroPersona->HeaderText = L"Genero";
			this->colGeneroPersona->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Femenino", L"Masculino" });
			this->colGeneroPersona->Name = L"colGeneroPersona";
			// 
			// colEdad
			// 
			this->colEdad->HeaderText = L"Edad";
			this->colEdad->Name = L"colEdad";
			// 
			// colIdentificacionPersona
			// 
			this->colIdentificacionPersona->HeaderText = L"Identificacion";
			this->colIdentificacionPersona->Name = L"colIdentificacionPersona";
			// 
			// colTelefonoPersona
			// 
			this->colTelefonoPersona->HeaderText = L"Telefono";
			this->colTelefonoPersona->Name = L"colTelefonoPersona";
			// 
			// colTipoPersona
			// 
			this->colTipoPersona->HeaderText = L"Tipo";
			this->colTipoPersona->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cliente", L"Empleado" });
			this->colTipoPersona->Name = L"colTipoPersona";
			// 
			// frmListaPersona
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->dgvListaPersona);
			this->Controls->Add(this->lblListaPersona);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaPersona";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Personas Registradas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaPersona))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
