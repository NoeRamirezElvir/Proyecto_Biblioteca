#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmVisitasSalaComputo
	/// </summary>
	public ref class frmVisitasSalaComputo : public System::Windows::Forms::Form
	{
	public:
		frmVisitasSalaComputo(void)
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
		~frmVisitasSalaComputo()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvSalaComputo;
	protected:

	protected:









	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIdLab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colHorario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDisponibilidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCapacidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEncargado;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmVisitasSalaComputo::typeid));
			this->dgvSalaComputo = (gcnew System::Windows::Forms::DataGridView());
			this->colIdLab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colHorario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDisponibilidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCapacidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEncargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSalaComputo))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvSalaComputo
			// 
			this->dgvSalaComputo->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvSalaComputo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSalaComputo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colIdLab,
					this->colHorario, this->colDisponibilidad, this->colCapacidad, this->colEncargado
			});
			this->dgvSalaComputo->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvSalaComputo->Location = System::Drawing::Point(68, 86);
			this->dgvSalaComputo->Name = L"dgvSalaComputo";
			this->dgvSalaComputo->Size = System::Drawing::Size(543, 263);
			this->dgvSalaComputo->TabIndex = 0;
			// 
			// colIdLab
			// 
			this->colIdLab->HeaderText = L"ID Laboratorio";
			this->colIdLab->Name = L"colIdLab";
			// 
			// colHorario
			// 
			this->colHorario->HeaderText = L"Horario";
			this->colHorario->Name = L"colHorario";
			// 
			// colDisponibilidad
			// 
			this->colDisponibilidad->HeaderText = L"Disponibilidad";
			this->colDisponibilidad->Name = L"colDisponibilidad";
			// 
			// colCapacidad
			// 
			this->colCapacidad->HeaderText = L"Capacidad";
			this->colCapacidad->Name = L"colCapacidad";
			// 
			// colEncargado
			// 
			this->colEncargado->HeaderText = L"Encargado";
			this->colEncargado->Name = L"colEncargado";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(204, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Laboratorios de Computo";
			// 
			// frmVisitasSalaComputo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGreen;
			this->ClientSize = System::Drawing::Size(681, 382);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvSalaComputo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmVisitasSalaComputo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Salas de Computo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSalaComputo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
