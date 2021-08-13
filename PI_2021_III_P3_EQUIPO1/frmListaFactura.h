#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaFactura
	/// </summary>
	public ref class frmListaFactura : public System::Windows::Forms::Form
	{
	public:
		frmListaFactura(void)
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
		~frmListaFactura()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvFactura;
	protected:

	protected:








	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFactura;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colMembresia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEmpleado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTipoPrestamo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTipoDaño;























	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaFactura::typeid));
			this->dgvFactura = (gcnew System::Windows::Forms::DataGridView());
			this->colFactura = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colMembresia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEmpleado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipoPrestamo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipoDaño = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFactura))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvFactura
			// 
			this->dgvFactura->BackgroundColor = System::Drawing::Color::LightCyan;
			this->dgvFactura->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFactura->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colFactura,
					this->colCliente, this->colMembresia, this->colEmpleado, this->colTipoPrestamo, this->colTipoDaño
			});
			this->dgvFactura->Location = System::Drawing::Point(22, 152);
			this->dgvFactura->Name = L"dgvFactura";
			this->dgvFactura->Size = System::Drawing::Size(751, 438);
			this->dgvFactura->TabIndex = 0;
			// 
			// colFactura
			// 
			this->colFactura->HeaderText = L"No Factura";
			this->colFactura->Name = L"colFactura";
			// 
			// colCliente
			// 
			this->colCliente->HeaderText = L"Cliente";
			this->colCliente->Name = L"colCliente";
			this->colCliente->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->colCliente->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// colMembresia
			// 
			this->colMembresia->HeaderText = L"Membresia de Cliente";
			this->colMembresia->Name = L"colMembresia";
			// 
			// colEmpleado
			// 
			this->colEmpleado->HeaderText = L"Empleado";
			this->colEmpleado->Name = L"colEmpleado";
			// 
			// colTipoPrestamo
			// 
			this->colTipoPrestamo->HeaderText = L"Tipo de Prestamo";
			this->colTipoPrestamo->Name = L"colTipoPrestamo";
			// 
			// colTipoDaño
			// 
			this->colTipoDaño->HeaderText = L"Tipo de Daño a Libro";
			this->colTipoDaño->Name = L"colTipoDaño";
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(361, 60);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(195, 25);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Lista de Facturas";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(227, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(89, 114);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// frmListaFactura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(816, 602);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->dgvFactura);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaFactura";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmListaFactura";
			this->Load += gcnew System::EventHandler(this, &frmListaFactura::frmListaFactura_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFactura))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void frmListaFactura_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

