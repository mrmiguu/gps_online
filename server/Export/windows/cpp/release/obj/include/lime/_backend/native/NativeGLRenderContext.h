// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#define INCLUDED_lime__backend_native_NativeGLRenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLProgram)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLRenderbuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLShader)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeGLRenderContext_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeGLRenderContext_obj OBJ_;
		NativeGLRenderContext_obj();

	public:
		enum { _hx_ClassId = 0x2375b35c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeGLRenderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime._backend.native.NativeGLRenderContext"); }
		static hx::ObjectPtr< NativeGLRenderContext_obj > __new();
		static hx::ObjectPtr< NativeGLRenderContext_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeGLRenderContext_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NativeGLRenderContext","\xfd","\x2f","\x3c","\x30"); }

		int DEPTH_BUFFER_BIT;
		int STENCIL_BUFFER_BIT;
		int COLOR_BUFFER_BIT;
		int POINTS;
		int LINES;
		int LINE_LOOP;
		int LINE_STRIP;
		int TRIANGLES;
		int TRIANGLE_STRIP;
		int TRIANGLE_FAN;
		int ZERO;
		int ONE;
		int SRC_COLOR;
		int ONE_MINUS_SRC_COLOR;
		int SRC_ALPHA;
		int ONE_MINUS_SRC_ALPHA;
		int DST_ALPHA;
		int ONE_MINUS_DST_ALPHA;
		int DST_COLOR;
		int ONE_MINUS_DST_COLOR;
		int SRC_ALPHA_SATURATE;
		int FUNC_ADD;
		int BLEND_EQUATION;
		int BLEND_EQUATION_RGB;
		int BLEND_EQUATION_ALPHA;
		int FUNC_SUBTRACT;
		int FUNC_REVERSE_SUBTRACT;
		int BLEND_DST_RGB;
		int BLEND_SRC_RGB;
		int BLEND_DST_ALPHA;
		int BLEND_SRC_ALPHA;
		int CONSTANT_COLOR;
		int ONE_MINUS_CONSTANT_COLOR;
		int CONSTANT_ALPHA;
		int ONE_MINUS_CONSTANT_ALPHA;
		int BLEND_COLOR;
		int ARRAY_BUFFER;
		int ELEMENT_ARRAY_BUFFER;
		int ARRAY_BUFFER_BINDING;
		int ELEMENT_ARRAY_BUFFER_BINDING;
		int STREAM_DRAW;
		int STATIC_DRAW;
		int DYNAMIC_DRAW;
		int BUFFER_SIZE;
		int BUFFER_USAGE;
		int CURRENT_VERTEX_ATTRIB;
		int FRONT;
		int BACK;
		int FRONT_AND_BACK;
		int CULL_FACE;
		int BLEND;
		int DITHER;
		int STENCIL_TEST;
		int DEPTH_TEST;
		int SCISSOR_TEST;
		int POLYGON_OFFSET_FILL;
		int SAMPLE_ALPHA_TO_COVERAGE;
		int SAMPLE_COVERAGE;
		int NO_ERROR;
		int INVALID_ENUM;
		int INVALID_VALUE;
		int INVALID_OPERATION;
		int OUT_OF_MEMORY;
		int CW;
		int CCW;
		int LINE_WIDTH;
		int ALIASED_POINT_SIZE_RANGE;
		int ALIASED_LINE_WIDTH_RANGE;
		int CULL_FACE_MODE;
		int FRONT_FACE;
		int DEPTH_RANGE;
		int DEPTH_WRITEMASK;
		int DEPTH_CLEAR_VALUE;
		int DEPTH_FUNC;
		int STENCIL_CLEAR_VALUE;
		int STENCIL_FUNC;
		int STENCIL_FAIL;
		int STENCIL_PASS_DEPTH_FAIL;
		int STENCIL_PASS_DEPTH_PASS;
		int STENCIL_REF;
		int STENCIL_VALUE_MASK;
		int STENCIL_WRITEMASK;
		int STENCIL_BACK_FUNC;
		int STENCIL_BACK_FAIL;
		int STENCIL_BACK_PASS_DEPTH_FAIL;
		int STENCIL_BACK_PASS_DEPTH_PASS;
		int STENCIL_BACK_REF;
		int STENCIL_BACK_VALUE_MASK;
		int STENCIL_BACK_WRITEMASK;
		int VIEWPORT;
		int SCISSOR_BOX;
		int COLOR_CLEAR_VALUE;
		int COLOR_WRITEMASK;
		int UNPACK_ALIGNMENT;
		int PACK_ALIGNMENT;
		int MAX_TEXTURE_SIZE;
		int MAX_VIEWPORT_DIMS;
		int SUBPIXEL_BITS;
		int RED_BITS;
		int GREEN_BITS;
		int BLUE_BITS;
		int ALPHA_BITS;
		int DEPTH_BITS;
		int STENCIL_BITS;
		int POLYGON_OFFSET_UNITS;
		int POLYGON_OFFSET_FACTOR;
		int TEXTURE_BINDING_2D;
		int SAMPLE_BUFFERS;
		int SAMPLES;
		int SAMPLE_COVERAGE_VALUE;
		int SAMPLE_COVERAGE_INVERT;
		int COMPRESSED_TEXTURE_FORMATS;
		int DONT_CARE;
		int FASTEST;
		int NICEST;
		int GENERATE_MIPMAP_HINT;
		int BYTE;
		int UNSIGNED_BYTE;
		int SHORT;
		int UNSIGNED_SHORT;
		int INT;
		int UNSIGNED_INT;
		int FLOAT;
		int DEPTH_COMPONENT;
		int ALPHA;
		int RGB;
		int RGBA;
		int BGR_EXT;
		int BGRA_EXT;
		int LUMINANCE;
		int LUMINANCE_ALPHA;
		int UNSIGNED_SHORT_4_4_4_4;
		int UNSIGNED_SHORT_5_5_5_1;
		int UNSIGNED_SHORT_5_6_5;
		int FRAGMENT_SHADER;
		int VERTEX_SHADER;
		int MAX_VERTEX_ATTRIBS;
		int MAX_VERTEX_UNIFORM_VECTORS;
		int MAX_VARYING_VECTORS;
		int MAX_COMBINED_TEXTURE_IMAGE_UNITS;
		int MAX_VERTEX_TEXTURE_IMAGE_UNITS;
		int MAX_TEXTURE_IMAGE_UNITS;
		int MAX_FRAGMENT_UNIFORM_VECTORS;
		int SHADER_TYPE;
		int DELETE_STATUS;
		int LINK_STATUS;
		int VALIDATE_STATUS;
		int ATTACHED_SHADERS;
		int ACTIVE_UNIFORMS;
		int ACTIVE_ATTRIBUTES;
		int SHADING_LANGUAGE_VERSION;
		int CURRENT_PROGRAM;
		int NEVER;
		int LESS;
		int EQUAL;
		int LEQUAL;
		int GREATER;
		int NOTEQUAL;
		int GEQUAL;
		int ALWAYS;
		int KEEP;
		int REPLACE;
		int INCR;
		int DECR;
		int INVERT;
		int INCR_WRAP;
		int DECR_WRAP;
		int VENDOR;
		int RENDERER;
		int VERSION;
		int NEAREST;
		int LINEAR;
		int NEAREST_MIPMAP_NEAREST;
		int LINEAR_MIPMAP_NEAREST;
		int NEAREST_MIPMAP_LINEAR;
		int LINEAR_MIPMAP_LINEAR;
		int TEXTURE_MAG_FILTER;
		int TEXTURE_MIN_FILTER;
		int TEXTURE_WRAP_S;
		int TEXTURE_WRAP_T;
		int TEXTURE_2D;
		int TEXTURE;
		int TEXTURE_CUBE_MAP;
		int TEXTURE_BINDING_CUBE_MAP;
		int TEXTURE_CUBE_MAP_POSITIVE_X;
		int TEXTURE_CUBE_MAP_NEGATIVE_X;
		int TEXTURE_CUBE_MAP_POSITIVE_Y;
		int TEXTURE_CUBE_MAP_NEGATIVE_Y;
		int TEXTURE_CUBE_MAP_POSITIVE_Z;
		int TEXTURE_CUBE_MAP_NEGATIVE_Z;
		int MAX_CUBE_MAP_TEXTURE_SIZE;
		int TEXTURE0;
		int TEXTURE1;
		int TEXTURE2;
		int TEXTURE3;
		int TEXTURE4;
		int TEXTURE5;
		int TEXTURE6;
		int TEXTURE7;
		int TEXTURE8;
		int TEXTURE9;
		int TEXTURE10;
		int TEXTURE11;
		int TEXTURE12;
		int TEXTURE13;
		int TEXTURE14;
		int TEXTURE15;
		int TEXTURE16;
		int TEXTURE17;
		int TEXTURE18;
		int TEXTURE19;
		int TEXTURE20;
		int TEXTURE21;
		int TEXTURE22;
		int TEXTURE23;
		int TEXTURE24;
		int TEXTURE25;
		int TEXTURE26;
		int TEXTURE27;
		int TEXTURE28;
		int TEXTURE29;
		int TEXTURE30;
		int TEXTURE31;
		int ACTIVE_TEXTURE;
		int REPEAT;
		int CLAMP_TO_EDGE;
		int MIRRORED_REPEAT;
		int FLOAT_VEC2;
		int FLOAT_VEC3;
		int FLOAT_VEC4;
		int INT_VEC2;
		int INT_VEC3;
		int INT_VEC4;
		int BOOL;
		int BOOL_VEC2;
		int BOOL_VEC3;
		int BOOL_VEC4;
		int FLOAT_MAT2;
		int FLOAT_MAT3;
		int FLOAT_MAT4;
		int SAMPLER_2D;
		int SAMPLER_CUBE;
		int VERTEX_ATTRIB_ARRAY_ENABLED;
		int VERTEX_ATTRIB_ARRAY_SIZE;
		int VERTEX_ATTRIB_ARRAY_STRIDE;
		int VERTEX_ATTRIB_ARRAY_TYPE;
		int VERTEX_ATTRIB_ARRAY_NORMALIZED;
		int VERTEX_ATTRIB_ARRAY_POINTER;
		int VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
		int VERTEX_PROGRAM_POINT_SIZE;
		int POINT_SPRITE;
		int COMPILE_STATUS;
		int LOW_FLOAT;
		int MEDIUM_FLOAT;
		int HIGH_FLOAT;
		int LOW_INT;
		int MEDIUM_INT;
		int HIGH_INT;
		int FRAMEBUFFER;
		int RENDERBUFFER;
		int RGBA4;
		int RGB5_A1;
		int RGB565;
		int DEPTH_COMPONENT16;
		int STENCIL_INDEX;
		int STENCIL_INDEX8;
		int DEPTH_STENCIL;
		int RENDERBUFFER_WIDTH;
		int RENDERBUFFER_HEIGHT;
		int RENDERBUFFER_INTERNAL_FORMAT;
		int RENDERBUFFER_RED_SIZE;
		int RENDERBUFFER_GREEN_SIZE;
		int RENDERBUFFER_BLUE_SIZE;
		int RENDERBUFFER_ALPHA_SIZE;
		int RENDERBUFFER_DEPTH_SIZE;
		int RENDERBUFFER_STENCIL_SIZE;
		int FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
		int FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
		int COLOR_ATTACHMENT0;
		int DEPTH_ATTACHMENT;
		int STENCIL_ATTACHMENT;
		int DEPTH_STENCIL_ATTACHMENT;
		int NONE;
		int FRAMEBUFFER_COMPLETE;
		int FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
		int FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
		int FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
		int FRAMEBUFFER_UNSUPPORTED;
		int FRAMEBUFFER_BINDING;
		int RENDERBUFFER_BINDING;
		int MAX_RENDERBUFFER_SIZE;
		int INVALID_FRAMEBUFFER_OPERATION;
		int UNPACK_FLIP_Y_WEBGL;
		int UNPACK_PREMULTIPLY_ALPHA_WEBGL;
		int CONTEXT_LOST_WEBGL;
		int UNPACK_COLORSPACE_CONVERSION_WEBGL;
		int BROWSER_DEFAULT_WEBGL;
		int version;
		 ::lime::graphics::opengl::GLProgram _hx___currentProgram;
		void activeTexture(int texture);
		::Dynamic activeTexture_dyn();

		void attachShader( ::lime::graphics::opengl::GLProgram program, ::lime::graphics::opengl::GLShader shader);
		::Dynamic attachShader_dyn();

		void bindAttribLocation( ::lime::graphics::opengl::GLProgram program,int index,::String name);
		::Dynamic bindAttribLocation_dyn();

		void bindBuffer(int target, ::lime::graphics::opengl::GLBuffer buffer);
		::Dynamic bindBuffer_dyn();

		void bindFramebuffer(int target, ::lime::graphics::opengl::GLFramebuffer framebuffer);
		::Dynamic bindFramebuffer_dyn();

		void bindRenderbuffer(int target, ::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		::Dynamic bindRenderbuffer_dyn();

		void bindTexture(int target, ::lime::graphics::opengl::GLTexture texture);
		::Dynamic bindTexture_dyn();

		void blendColor(Float red,Float green,Float blue,Float alpha);
		::Dynamic blendColor_dyn();

		void blendEquation(int mode);
		::Dynamic blendEquation_dyn();

		void blendEquationSeparate(int modeRGB,int modeAlpha);
		::Dynamic blendEquationSeparate_dyn();

		void blendFunc(int sfactor,int dfactor);
		::Dynamic blendFunc_dyn();

		void blendFuncSeparate(int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		::Dynamic blendFuncSeparate_dyn();

		void bufferData(int target, ::lime::utils::ArrayBufferView data,int usage);
		::Dynamic bufferData_dyn();

		void bufferSubData(int target,int offset, ::lime::utils::ArrayBufferView data);
		::Dynamic bufferSubData_dyn();

		int checkFramebufferStatus(int target);
		::Dynamic checkFramebufferStatus_dyn();

		void clear(int mask);
		::Dynamic clear_dyn();

		void clearColor(Float red,Float green,Float blue,Float alpha);
		::Dynamic clearColor_dyn();

		void clearDepth(Float depth);
		::Dynamic clearDepth_dyn();

		void clearStencil(int s);
		::Dynamic clearStencil_dyn();

		void colorMask(bool red,bool green,bool blue,bool alpha);
		::Dynamic colorMask_dyn();

		void compileShader( ::lime::graphics::opengl::GLShader shader);
		::Dynamic compileShader_dyn();

		void compressedTexImage2D(int target,int level,int internalformat,int width,int height,int border, ::lime::utils::ArrayBufferView data);
		::Dynamic compressedTexImage2D_dyn();

		void compressedTexSubImage2D(int target,int level,int xoffset,int yoffset,int width,int height,int format, ::lime::utils::ArrayBufferView data);
		::Dynamic compressedTexSubImage2D_dyn();

		void copyTexImage2D(int target,int level,int internalformat,int x,int y,int width,int height,int border);
		::Dynamic copyTexImage2D_dyn();

		void copyTexSubImage2D(int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		::Dynamic copyTexSubImage2D_dyn();

		 ::lime::graphics::opengl::GLBuffer createBuffer();
		::Dynamic createBuffer_dyn();

		 ::lime::graphics::opengl::GLFramebuffer createFramebuffer();
		::Dynamic createFramebuffer_dyn();

		 ::lime::graphics::opengl::GLProgram createProgram();
		::Dynamic createProgram_dyn();

		 ::lime::graphics::opengl::GLRenderbuffer createRenderbuffer();
		::Dynamic createRenderbuffer_dyn();

		 ::lime::graphics::opengl::GLShader createShader(int type);
		::Dynamic createShader_dyn();

		 ::lime::graphics::opengl::GLTexture createTexture();
		::Dynamic createTexture_dyn();

		void cullFace(int mode);
		::Dynamic cullFace_dyn();

		void deleteBuffer( ::lime::graphics::opengl::GLBuffer buffer);
		::Dynamic deleteBuffer_dyn();

		void deleteFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer);
		::Dynamic deleteFramebuffer_dyn();

		void deleteProgram( ::lime::graphics::opengl::GLProgram program);
		::Dynamic deleteProgram_dyn();

		void deleteRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		::Dynamic deleteRenderbuffer_dyn();

		void deleteShader( ::lime::graphics::opengl::GLShader shader);
		::Dynamic deleteShader_dyn();

		void deleteTexture( ::lime::graphics::opengl::GLTexture texture);
		::Dynamic deleteTexture_dyn();

		void depthFunc(int func);
		::Dynamic depthFunc_dyn();

		void depthMask(bool flag);
		::Dynamic depthMask_dyn();

		void depthRange(Float zNear,Float zFar);
		::Dynamic depthRange_dyn();

		void detachShader( ::lime::graphics::opengl::GLProgram program, ::lime::graphics::opengl::GLShader shader);
		::Dynamic detachShader_dyn();

		void disable(int cap);
		::Dynamic disable_dyn();

		void disableVertexAttribArray(int index);
		::Dynamic disableVertexAttribArray_dyn();

		void drawArrays(int mode,int first,int count);
		::Dynamic drawArrays_dyn();

		void drawElements(int mode,int count,int type,int offset);
		::Dynamic drawElements_dyn();

		void enable(int cap);
		::Dynamic enable_dyn();

		void enableVertexAttribArray(int index);
		::Dynamic enableVertexAttribArray_dyn();

		void finish();
		::Dynamic finish_dyn();

		void flush();
		::Dynamic flush_dyn();

		void framebufferRenderbuffer(int target,int attachment,int renderbuffertarget, ::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		::Dynamic framebufferRenderbuffer_dyn();

		void framebufferTexture2D(int target,int attachment,int textarget, ::lime::graphics::opengl::GLTexture texture,int level);
		::Dynamic framebufferTexture2D_dyn();

		void frontFace(int mode);
		::Dynamic frontFace_dyn();

		void generateMipmap(int target);
		::Dynamic generateMipmap_dyn();

		 ::Dynamic getActiveAttrib( ::lime::graphics::opengl::GLProgram program,int index);
		::Dynamic getActiveAttrib_dyn();

		 ::Dynamic getActiveUniform( ::lime::graphics::opengl::GLProgram program,int index);
		::Dynamic getActiveUniform_dyn();

		::Array< ::Dynamic> getAttachedShaders( ::lime::graphics::opengl::GLProgram program);
		::Dynamic getAttachedShaders_dyn();

		int getAttribLocation( ::lime::graphics::opengl::GLProgram program,::String name);
		::Dynamic getAttribLocation_dyn();

		int getBufferParameter(int target,int pname);
		::Dynamic getBufferParameter_dyn();

		 ::Dynamic getContextAttributes();
		::Dynamic getContextAttributes_dyn();

		int getError();
		::Dynamic getError_dyn();

		 ::Dynamic getExtension(::String name);
		::Dynamic getExtension_dyn();

		int getFramebufferAttachmentParameter(int target,int attachment,int pname);
		::Dynamic getFramebufferAttachmentParameter_dyn();

		 ::Dynamic getParameter(int pname);
		::Dynamic getParameter_dyn();

		::String getProgramInfoLog( ::lime::graphics::opengl::GLProgram program);
		::Dynamic getProgramInfoLog_dyn();

		int getProgramParameter( ::lime::graphics::opengl::GLProgram program,int pname);
		::Dynamic getProgramParameter_dyn();

		int getRenderbufferParameter(int target,int pname);
		::Dynamic getRenderbufferParameter_dyn();

		::String getShaderInfoLog( ::lime::graphics::opengl::GLShader shader);
		::Dynamic getShaderInfoLog_dyn();

		int getShaderParameter( ::lime::graphics::opengl::GLShader shader,int pname);
		::Dynamic getShaderParameter_dyn();

		 ::Dynamic getShaderPrecisionFormat(int shadertype,int precisiontype);
		::Dynamic getShaderPrecisionFormat_dyn();

		::String getShaderSource( ::lime::graphics::opengl::GLShader shader);
		::Dynamic getShaderSource_dyn();

		::Array< ::String > getSupportedExtensions();
		::Dynamic getSupportedExtensions_dyn();

		int getTexParameter(int target,int pname);
		::Dynamic getTexParameter_dyn();

		 ::Dynamic getUniform( ::lime::graphics::opengl::GLProgram program,int location);
		::Dynamic getUniform_dyn();

		int getUniformLocation( ::lime::graphics::opengl::GLProgram program,::String name);
		::Dynamic getUniformLocation_dyn();

		int getVertexAttrib(int index,int pname);
		::Dynamic getVertexAttrib_dyn();

		int getVertexAttribOffset(int index,int pname);
		::Dynamic getVertexAttribOffset_dyn();

		void hint(int target,int mode);
		::Dynamic hint_dyn();

		bool isBuffer( ::lime::graphics::opengl::GLBuffer buffer);
		::Dynamic isBuffer_dyn();

		bool isContextLost();
		::Dynamic isContextLost_dyn();

		bool isEnabled(int cap);
		::Dynamic isEnabled_dyn();

		bool isFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer);
		::Dynamic isFramebuffer_dyn();

		bool isProgram( ::lime::graphics::opengl::GLProgram program);
		::Dynamic isProgram_dyn();

		bool isRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		::Dynamic isRenderbuffer_dyn();

		bool isShader( ::lime::graphics::opengl::GLShader shader);
		::Dynamic isShader_dyn();

		bool isTexture( ::lime::graphics::opengl::GLTexture texture);
		::Dynamic isTexture_dyn();

		void lineWidth(Float width);
		::Dynamic lineWidth_dyn();

		void linkProgram( ::lime::graphics::opengl::GLProgram program);
		::Dynamic linkProgram_dyn();

		void pixelStorei(int pname,int param);
		::Dynamic pixelStorei_dyn();

		void polygonOffset(Float factor,Float units);
		::Dynamic polygonOffset_dyn();

		void readPixels(int x,int y,int width,int height,int format,int type, ::lime::utils::ArrayBufferView pixels);
		::Dynamic readPixels_dyn();

		void renderbufferStorage(int target,int internalformat,int width,int height);
		::Dynamic renderbufferStorage_dyn();

		void sampleCoverage(Float value,bool invert);
		::Dynamic sampleCoverage_dyn();

		void scissor(int x,int y,int width,int height);
		::Dynamic scissor_dyn();

		void shaderSource( ::lime::graphics::opengl::GLShader shader,::String source);
		::Dynamic shaderSource_dyn();

		void stencilFunc(int func,int ref,int mask);
		::Dynamic stencilFunc_dyn();

		void stencilFuncSeparate(int face,int func,int ref,int mask);
		::Dynamic stencilFuncSeparate_dyn();

		void stencilMask(int mask);
		::Dynamic stencilMask_dyn();

		void stencilMaskSeparate(int face,int mask);
		::Dynamic stencilMaskSeparate_dyn();

		void stencilOp(int fail,int zfail,int zpass);
		::Dynamic stencilOp_dyn();

		void stencilOpSeparate(int face,int fail,int zfail,int zpass);
		::Dynamic stencilOpSeparate_dyn();

		void texImage2D(int target,int level,int internalformat,int width,int height,int border,int format,int type, ::lime::utils::ArrayBufferView pixels);
		::Dynamic texImage2D_dyn();

		void texParameterf(int target,int pname,Float param);
		::Dynamic texParameterf_dyn();

		void texParameteri(int target,int pname,int param);
		::Dynamic texParameteri_dyn();

		void texSubImage2D(int target,int level,int xoffset,int yoffset,int width,int height,int format,int type, ::lime::utils::ArrayBufferView pixels);
		::Dynamic texSubImage2D_dyn();

		void uniform1f(int location,Float x);
		::Dynamic uniform1f_dyn();

		void uniform1fv(int location, ::lime::utils::ArrayBufferView x);
		::Dynamic uniform1fv_dyn();

		void uniform1i(int location,int x);
		::Dynamic uniform1i_dyn();

		void uniform1iv(int location, ::lime::utils::ArrayBufferView v);
		::Dynamic uniform1iv_dyn();

		void uniform2f(int location,Float x,Float y);
		::Dynamic uniform2f_dyn();

		void uniform2fv(int location, ::lime::utils::ArrayBufferView v);
		::Dynamic uniform2fv_dyn();

		void uniform2i(int location,int x,int y);
		::Dynamic uniform2i_dyn();

		void uniform2iv(int location, ::lime::utils::ArrayBufferView v);
		::Dynamic uniform2iv_dyn();

		void uniform3f(int location,Float x,Float y,Float z);
		::Dynamic uniform3f_dyn();

		void uniform3fv(int location, ::lime::utils::ArrayBufferView v);
		::Dynamic uniform3fv_dyn();

		void uniform3i(int location,int x,int y,int z);
		::Dynamic uniform3i_dyn();

		void uniform3iv(int location, ::lime::utils::ArrayBufferView v);
		::Dynamic uniform3iv_dyn();

		void uniform4f(int location,Float x,Float y,Float z,Float w);
		::Dynamic uniform4f_dyn();

		void uniform4fv(int location, ::lime::utils::ArrayBufferView v);
		::Dynamic uniform4fv_dyn();

		void uniform4i(int location,int x,int y,int z,int w);
		::Dynamic uniform4i_dyn();

		void uniform4iv(int location, ::lime::utils::ArrayBufferView v);
		::Dynamic uniform4iv_dyn();

		void uniformMatrix2fv(int location,bool transpose, ::lime::utils::ArrayBufferView v);
		::Dynamic uniformMatrix2fv_dyn();

		void uniformMatrix3fv(int location,bool transpose, ::lime::utils::ArrayBufferView v);
		::Dynamic uniformMatrix3fv_dyn();

		void uniformMatrix4fv(int location,bool transpose, ::lime::utils::ArrayBufferView v);
		::Dynamic uniformMatrix4fv_dyn();

		void useProgram( ::lime::graphics::opengl::GLProgram program);
		::Dynamic useProgram_dyn();

		void validateProgram( ::lime::graphics::opengl::GLProgram program);
		::Dynamic validateProgram_dyn();

		void vertexAttrib1f(int indx,Float x);
		::Dynamic vertexAttrib1f_dyn();

		void vertexAttrib1fv(int indx, ::lime::utils::ArrayBufferView values);
		::Dynamic vertexAttrib1fv_dyn();

		void vertexAttrib2f(int indx,Float x,Float y);
		::Dynamic vertexAttrib2f_dyn();

		void vertexAttrib2fv(int indx, ::lime::utils::ArrayBufferView values);
		::Dynamic vertexAttrib2fv_dyn();

		void vertexAttrib3f(int indx,Float x,Float y,Float z);
		::Dynamic vertexAttrib3f_dyn();

		void vertexAttrib3fv(int indx, ::lime::utils::ArrayBufferView values);
		::Dynamic vertexAttrib3fv_dyn();

		void vertexAttrib4f(int indx,Float x,Float y,Float z,Float w);
		::Dynamic vertexAttrib4f_dyn();

		void vertexAttrib4fv(int indx, ::lime::utils::ArrayBufferView values);
		::Dynamic vertexAttrib4fv_dyn();

		void vertexAttribPointer(int indx,int size,int type,bool normalized,int stride,int offset);
		::Dynamic vertexAttribPointer_dyn();

		void viewport(int x,int y,int width,int height);
		::Dynamic viewport_dyn();

		int get_version();
		::Dynamic get_version_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeGLRenderContext */ 