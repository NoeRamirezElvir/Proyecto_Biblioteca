#pragma once
namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaPrestamo
	/// </summary>
	public ref class frmListaPrestamo : public System::Windows::Forms::Form
	{
	public:
		frmListaPrestamo(void)
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
		~frmListaPrestamo()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvPrestamo;
	protected:

	protected:








	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTipoPrestamo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDias;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDaño;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colLibro;
























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaPrestamo::typeid));
			this->dgvPrestamo = (gcnew System::Windows::Forms::DataGridView());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipoPrestamo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDias = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDaño = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colLibro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvPrestamo
			// 
			this->dgvPrestamo->BackgroundColor = System::Drawing::Color::LightCyan;
			this->dgvPrestamo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPrestamo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colID, this->colNombre,
					this->colApellido, this->colTipoPrestamo, this->colDias, this->colDaño, this->colLibro
			});
			this->dgvPrestamo->Location = System::Drawing::Point(12, 152);
			this->dgvPrestamo->Name = L"dgvPrestamo";
			this->dgvPrestamo->Size = System::Drawing::Size(852, 375);
			this->dgvPrestamo->TabIndex = 0;
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(186, 71);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(347, 25);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Lista de Prestamos Registrados";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(564, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(165, 134);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// colID
			// 
			this->colID->HeaderText = L"ID";
			this->colID->Name = L"colID";
			this->colID->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->colID->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->Name = L"colNombre";
			// 
			// colApellido
			// 
			this->colApellido->HeaderText = L"Apellido";
			this->colApellido->Name = L"colApellido";
			// 
			// colTipoPrestamo
			// 
			this->colTipoPrestamo->HeaderText = L"Tipo de Prestamo";
			this->colTipoPrestamo->Name = L"colTipoPrestamo";
			this->colTipoPrestamo->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->colTipoPrestamo->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// colDias
			// 
			this->colDias->HeaderText = L"Dias de Alquiler";
			this->colDias->Name = L"colDias";
			// 
			// colDaño
			// 
			this->colDaño->HeaderText = L"ID Daño al libro";
			this->colDaño->Name = L"colDaño";
			this->colDaño->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->colDaño->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// colLibro
			// 
			this->colLibro->HeaderText = L"Nombre del Libro";
			this->colLibro->Name = L"colLibro";
			this->colLibro->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->colLibro->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// frmListaPrestamo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(893, 539);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->dgvPrestamo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaPrestamo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Prestamos Registrados";
			this->Load += gcnew System::EventHandler(this, &frmListaPrestamo::frmListaPrestamo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void frmListaPrestamo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

