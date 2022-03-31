//arat

#include <d3d8.h>

//değiştir

#include <d3d9.h>

//arat

typedef BOOL (*PFNCONFIRMDEVICE) (D3DCAPS8& rkD3DCaps, UINT uBehavior, D3DFORMAT eD3DFmt);

//değiştir

typedef BOOL (*PFNCONFIRMDEVICE) (D3DCAPS9& rkD3DCaps, UINT uBehavior, D3DFORMAT eD3DFmt);

//arat

VOID Build(IDirect3D8& rkD3D, D3DFORMAT eD3DFmtDefault, UINT iAdapter);

//değiştir

VOID Build(IDirect3D9& rkD3D, D3DFORMAT eD3DFmtDefault, UINT iAdapter);

//arat

BOOL Build(IDirect3D8& rkD3D, UINT iAdapter, UINT iDevType, D3D_CAdapterDisplayModeList& rkD3DADMList, PFNCONFIRMDEVICE pfnConfirmDevice);

//değiştir

BOOL Build(IDirect3D9& rkD3D, UINT iAdapter, UINT iDevType, D3D_CAdapterDisplayModeList& rkD3DADMList, PFNCONFIRMDEVICE pfnConfirmDevice);

//arat

BOOL FindDepthStencilFormat(IDirect3D8& rkD3D, UINT iAdapter, D3DDEVTYPE DeviceType, D3DFORMAT TargetFormat, D3DFORMAT* pDepthStencilFormat);

//değiştir

BOOL FindDepthStencilFormat(IDirect3D9& rkD3D, UINT iAdapter, D3DDEVTYPE DeviceType, D3DFORMAT TargetFormat, D3DFORMAT* pDepthStencilFormat);

//arat

D3DCAPS8	m_kD3DCaps;

//değiştir

D3DCAPS9	m_kD3DCaps;

//arat

		BOOL Build(IDirect3D8& rkD3D, UINT iAdapter, PFNCONFIRMDEVICE pfnConfirmDevice);
		VOID GetString(std::string* pstEnumList);

		D3DADAPTER_IDENTIFIER8& GetIdentifier()

//değiştir

		BOOL Build(IDirect3D9& rkD3D, UINT iAdapter, PFNCONFIRMDEVICE pfnConfirmDevice);
		VOID GetString(std::string* pstEnumList);

		D3DADAPTER_IDENTIFIER9& GetIdentifier()

//arat

D3DADAPTER_IDENTIFIER8	m_kD3DAdapterIdentifier;

//değiştir

D3DADAPTER_IDENTIFIER9	m_kD3DAdapterIdentifier;

//arat

BOOL Build(IDirect3D8& rkD3D, PFNCONFIRMDEVICE pfnConfirmDevice);

//değiştir

BOOL Build(IDirect3D9& rkD3D, PFNCONFIRMDEVICE pfnConfirmDevice);