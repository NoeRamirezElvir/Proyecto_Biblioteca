#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmInventario
	/// </summary>
	public ref class frmInventario : public System::Windows::Forms::Form
	{
	public:
		frmInventario(void)
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
		~frmInventario()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvInventario;
	protected:

	protected:

	protected:





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIDpaquete;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colProveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCantidadlibros;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmInventario::typeid));
			this->dgvInventario = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->colIDpaquete = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colProveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCantidadlibros = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEncargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInventario))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvInventario
			// 
			this->dgvInventario->BackgroundColor = System::Drawing::Color::PapayaWhip;
			this->dgvInventario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInventario->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colIDpaquete,
					this->colFecha, this->colProveedor, this->colCantidadlibros, this->colEncargado
			});
			this->dgvInventario->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvInventario->Location = System::Drawing::Point(10, 78);
			this->dgvInventario->Name = L"dgvInventario";
			this->dgvInventario->Size = System::Drawing::Size(643, 391);
			this->dgvInventario->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(249, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Inventario ";
			// 
			// colIDpaquete
			// 
			this->colIDpaquete->HeaderText = L"ID del paquete";
			this->colIDpaquete->Name = L"colIDpaquete";
			this->colIDpaquete->Width = 120;
			// 
			// colFecha
			// 
			this->colFecha->HeaderText = L"Fecha";
			this->colFecha->Name = L"colFecha";
			this->colFecha->Width = 120;
			// 
			// colProveedor
			// 
			this->colProveedor->HeaderText = L"Proveedor";
			this->colProveedor->Name = L"colProveedor";
			this->colProveedor->Width = 120;
			// 
			// colCantidadlibros
			// 
			this->colCantidadlibros->HeaderText = L"Cantidad de libros";
			this->colCantidadlibros->Name = L"colCantidadlibros";
			this->colCantidadlibros->Width = 120;
			// 
			// colEncargado
			// 
			this->colEncargado->HeaderText = L"Encargado";
			this->colEncargado->Name = L"colEncargado";
			this->colEncargado->Width = 120;
			// 
			// frmInventario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(665, 481);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvInventario);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmInventario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inventario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInventario))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
