#pragma once

#include "Main.h"

class Renderer
{
public:
	Renderer( COMMON* pc);
	~Renderer(void);
	void Renderer::init();
	void initEffect( void );
	void Renderer::Render();
	void Renderer::RenderShader();
	void Renderer::RenderCode1();
	void Renderer::RenderCode2() ;
	void SetVertexBuffer(LPDIRECT3DVERTEXBUFFER9 pVertexBuffer);
	void Dispose();
	void RenderCode3();
	D3DLOCKED_RECT m_lockedRect;
	D3DLOCKED_RECT m_lockedRect2;
	D3DSURFACE_DESC m_desc; 

	D3DXMATRIX g_matWorld;
	D3DXMATRIX g_matView;
	D3DXMATRIX g_matProj;

	__int64 t1,t2;
	long sum;
	COMMON *C;

	LPD3DXEFFECT            g_pEffect ;

	LPDIRECT3DTEXTURE9      g_pTexture_0 ;
	LPDIRECT3DTEXTURE9      g_pTexture_1 ;
	LPDIRECT3DTEXTURE9 m_pTexRender;	
	LPDIRECT3DSURFACE9 m_pTexSurface;
	LPDIRECT3DSURFACE9 m_pTexSurface2;

	LPDIRECT3DVERTEXBUFFER9 mVertexBuffer;

};
