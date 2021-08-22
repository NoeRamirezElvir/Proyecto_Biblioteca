#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaSalaLectura
	/// </summary>
	public ref class frmListaSalaLectura : public System::Windows::Forms::Form
	{
	public:
		frmListaSalaLectura(void)
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
		~frmListaSalaLectura()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvListaSalaL;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEncargado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCapacidad;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colDisponibilidad;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaSalaLectura::typeid));
			this->dgvListaSalaL = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->colID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEncargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCapacidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDisponibilidad = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaSalaL))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvListaSalaL
			// 
			this->dgvListaSalaL->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaSalaL->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->colID,
					this->colEncargado, this->colCapacidad, this->colDisponibilidad
			});
			this->dgvListaSalaL->Location = System::Drawing::Point(7, 98);
			this->dgvListaSalaL->Name = L"dgvListaSalaL";
			this->dgvListaSalaL->Size = System::Drawing::Size(645, 342);
			this->dgvListaSalaL->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(196, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Salas de lectura";
			// 
			// colID
			// 
			this->colID->HeaderText = L"ID de la sala ";
			this->colID->Name = L"colID";
			this->colID->Width = 150;
			// 
			// colEncargado
			// 
			this->colEncargado->HeaderText = L"Encargado";
			this->colEncargado->Name = L"colEncargado";
			this->colEncargado->Width = 150;
			// 
			// colCapacidad
			// 
			this->colCapacidad->HeaderText = L"Capacidad";
			this->colCapacidad->Name = L"colCapacidad";
			this->colCapacidad->Width = 150;
			// 
			// colDisponibilidad
			// 
			this->colDisponibilidad->HeaderText = L"Disponibilidad";
			this->colDisponibilidad->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Disponible", L"Ocupada" });
			this->colDisponibilidad->Name = L"colDisponibilidad";
			this->colDisponibilidad->Width = 150;
			// 
			// frmListaSalaLectura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->ClientSize = System::Drawing::Size(661, 447);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvListaSalaL);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaSalaLectura";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lista Salas de Lectura";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaSalaL))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
