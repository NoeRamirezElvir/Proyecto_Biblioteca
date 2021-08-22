#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLibrosEstante
	/// </summary>
	public ref class frmLibrosEstante : public System::Windows::Forms::Form
	{
	public:
		frmLibrosEstante(void)
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
		~frmLibrosEstante()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNumeroEstante;
	public: System::Windows::Forms::DataGridView^ dgvListaEstantes;
	private:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCategoria;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNiveles;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLibrosEstante::typeid));
			this->lblNumeroEstante = (gcnew System::Windows::Forms::Label());
			this->dgvListaEstantes = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCategoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNiveles = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaEstantes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// lblNumeroEstante
			// 
			this->lblNumeroEstante->AutoSize = true;
			this->lblNumeroEstante->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumeroEstante->Location = System::Drawing::Point(269, 33);
			this->lblNumeroEstante->Name = L"lblNumeroEstante";
			this->lblNumeroEstante->Size = System::Drawing::Size(195, 25);
			this->lblNumeroEstante->TabIndex = 0;
			this->lblNumeroEstante->Text = L"Lista de Estantes";
			// 
			// dgvListaEstantes
			// 
			this->dgvListaEstantes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaEstantes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->colId,
					this->colCodigo, this->colCategoria, this->colNiveles
			});
			this->dgvListaEstantes->Location = System::Drawing::Point(146, 85);
			this->dgvListaEstantes->Name = L"dgvListaEstantes";
			this->dgvListaEstantes->Size = System::Drawing::Size(435, 267);
			this->dgvListaEstantes->TabIndex = 2;
			// 
			// colId
			// 
			this->colId->HeaderText = L"ID";
			this->colId->Name = L"colId";
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Letra Inicial";
			this->colCodigo->Name = L"colCodigo";
			// 
			// colCategoria
			// 
			this->colCategoria->HeaderText = L"Letra Final";
			this->colCategoria->Name = L"colCategoria";
			// 
			// colNiveles
			// 
			this->colNiveles->HeaderText = L"Niveles";
			this->colNiveles->Name = L"colNiveles";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(531, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(66, 67);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(603, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(66, 67);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// frmLibrosEstante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(719, 389);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dgvListaEstantes);
			this->Controls->Add(this->lblNumeroEstante);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmLibrosEstante";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" Lista Estantes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaEstantes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
