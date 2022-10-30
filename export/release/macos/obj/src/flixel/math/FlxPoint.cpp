#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_13_new,"flixel.math.FlxPoint","new",0x5991ca64,"flixel.math.FlxPoint.new","flixel/math/FlxPoint.hx",13,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_66_put,"flixel.math.FlxPoint","put",0x59935cd3,"flixel.math.FlxPoint.put","flixel/math/FlxPoint.hx",66,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_79_putWeak,"flixel.math.FlxPoint","putWeak",0xb3cc4aeb,"flixel.math.FlxPoint.putWeak","flixel/math/FlxPoint.hx",79,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_93_set,"flixel.math.FlxPoint","set",0x599595a6,"flixel.math.FlxPoint.set","flixel/math/FlxPoint.hx",93,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_107_add,"flixel.math.FlxPoint","add",0x5987ec25,"flixel.math.FlxPoint.add","flixel/math/FlxPoint.hx",107,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_120_addPoint,"flixel.math.FlxPoint","addPoint",0x1b3211eb,"flixel.math.FlxPoint.addPoint","flixel/math/FlxPoint.hx",120,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_134_addPointWeak,"flixel.math.FlxPoint","addPointWeak",0xf5076c03,"flixel.math.FlxPoint.addPointWeak","flixel/math/FlxPoint.hx",134,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_148_subtract,"flixel.math.FlxPoint","subtract",0xd356ac90,"flixel.math.FlxPoint.subtract","flixel/math/FlxPoint.hx",148,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_161_subtractPoint,"flixel.math.FlxPoint","subtractPoint",0xa41aeda0,"flixel.math.FlxPoint.subtractPoint","flixel/math/FlxPoint.hx",161,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_175_subtractPointWeak,"flixel.math.FlxPoint","subtractPointWeak",0x0a80c638,"flixel.math.FlxPoint.subtractPointWeak","flixel/math/FlxPoint.hx",175,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_189_scale,"flixel.math.FlxPoint","scale",0x1902518e,"flixel.math.FlxPoint.scale","flixel/math/FlxPoint.hx",189,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_202_copyFrom,"flixel.math.FlxPoint","copyFrom",0xa3a6433b,"flixel.math.FlxPoint.copyFrom","flixel/math/FlxPoint.hx",202,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_216_copyTo,"flixel.math.FlxPoint","copyTo",0x56123d0c,"flixel.math.FlxPoint.copyTo","flixel/math/FlxPoint.hx",216,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_233_copyFromFlash,"flixel.math.FlxPoint","copyFromFlash",0x788ecc75,"flixel.math.FlxPoint.copyFromFlash","flixel/math/FlxPoint.hx",233,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_246_copyToFlash,"flixel.math.FlxPoint","copyToFlash",0x8fb29d04,"flixel.math.FlxPoint.copyToFlash","flixel/math/FlxPoint.hx",246,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_264_addToFlash,"flixel.math.FlxPoint","addToFlash",0x5739bc90,"flixel.math.FlxPoint.addToFlash","flixel/math/FlxPoint.hx",264,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_278_subtractFromFlash,"flixel.math.FlxPoint","subtractFromFlash",0x9d3f4136,"flixel.math.FlxPoint.subtractFromFlash","flixel/math/FlxPoint.hx",278,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_296_inCoords,"flixel.math.FlxPoint","inCoords",0x2c48255f,"flixel.math.FlxPoint.inCoords","flixel/math/FlxPoint.hx",296,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_307_inRect,"flixel.math.FlxPoint","inRect",0x14ec4c25,"flixel.math.FlxPoint.inRect","flixel/math/FlxPoint.hx",307,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_317_distanceTo,"flixel.math.FlxPoint","distanceTo",0xac8be28c,"flixel.math.FlxPoint.distanceTo","flixel/math/FlxPoint.hx",317,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_328_floor,"flixel.math.FlxPoint","floor",0xa2ca54d0,"flixel.math.FlxPoint.floor","flixel/math/FlxPoint.hx",328,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_338_ceil,"flixel.math.FlxPoint","ceil",0xfeb9e881,"flixel.math.FlxPoint.ceil","flixel/math/FlxPoint.hx",338,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_348_round,"flixel.math.FlxPoint","round",0x8d997b52,"flixel.math.FlxPoint.round","flixel/math/FlxPoint.hx",348,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_362_rotate,"flixel.math.FlxPoint","rotate",0x57ff66d7,"flixel.math.FlxPoint.rotate","flixel/math/FlxPoint.hx",362,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_383_angleBetween,"flixel.math.FlxPoint","angleBetween",0x3b318bb1,"flixel.math.FlxPoint.angleBetween","flixel/math/FlxPoint.hx",383,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_425_toVector,"flixel.math.FlxPoint","toVector",0x99e1901a,"flixel.math.FlxPoint.toVector","flixel/math/FlxPoint.hx",425,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_435_equals,"flixel.math.FlxPoint","equals",0x4cd20ebb,"flixel.math.FlxPoint.equals","flixel/math/FlxPoint.hx",435,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_444_destroy,"flixel.math.FlxPoint","destroy",0xdae378fe,"flixel.math.FlxPoint.destroy","flixel/math/FlxPoint.hx",444,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_452_transform,"flixel.math.FlxPoint","transform",0x46de8270,"flixel.math.FlxPoint.transform","flixel/math/FlxPoint.hx",452,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_464_toString,"flixel.math.FlxPoint","toString",0x13b40828,"flixel.math.FlxPoint.toString","flixel/math/FlxPoint.hx",464,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_472_set_x,"flixel.math.FlxPoint","set_x",0x1a631e5f,"flixel.math.FlxPoint.set_x","flixel/math/FlxPoint.hx",472,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_480_set_y,"flixel.math.FlxPoint","set_y",0x1a631e60,"flixel.math.FlxPoint.set_y","flixel/math/FlxPoint.hx",480,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_28_get,"flixel.math.FlxPoint","get",0x598c7a9a,"flixel.math.FlxPoint.get","flixel/math/FlxPoint.hx",28,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_43_weak,"flixel.math.FlxPoint","weak",0x0bf225f4,"flixel.math.FlxPoint.weak","flixel/math/FlxPoint.hx",43,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_485_get_pool,"flixel.math.FlxPoint","get_pool",0xa55c73e1,"flixel.math.FlxPoint.get_pool","flixel/math/FlxPoint.hx",485,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_cceaeff5e596bc9e_17_boot,"flixel.math.FlxPoint","boot",0xfe184dae,"flixel.math.FlxPoint.boot","flixel/math/FlxPoint.hx",17,0xb3e1cd2c)
namespace flixel{
namespace math{

void FlxPoint_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_13_new)
HXLINE(  53)		this->_inPool = false;
HXLINE(  52)		this->_weak = false;
HXLINE(  50)		this->y = ((Float)0);
HXLINE(  49)		this->x = ((Float)0);
HXLINE(  58)		this->set(X,Y);
            	}

Dynamic FlxPoint_obj::__CreateEmpty() { return new FlxPoint_obj; }

void *FlxPoint_obj::_hx_vtable = 0;

Dynamic FlxPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPoint_obj > _hx_result = new FlxPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x523b7d02;
}

static ::flixel::util::IFlxPooled_obj _hx_flixel_math_FlxPoint__hx_flixel_util_IFlxPooled= {
	( void (::hx::Object::*)())&::flixel::math::FlxPoint_obj::destroy,
	( void (::hx::Object::*)())&::flixel::math::FlxPoint_obj::put,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_math_FlxPoint__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::math::FlxPoint_obj::destroy,
};

void *FlxPoint_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9aa322a2: return &_hx_flixel_math_FlxPoint__hx_flixel_util_IFlxPooled;
		case (int)0xd4fe2fcd: return &_hx_flixel_math_FlxPoint__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxPoint_obj::put(){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_66_put)
HXDLIN(  66)		if (!(this->_inPool)) {
HXLINE(  68)			this->_inPool = true;
HXLINE(  69)			this->_weak = false;
HXLINE(  70)			::flixel::math::FlxPoint_obj::_pool->putUnsafe(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,put,(void))

void FlxPoint_obj::putWeak(){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_79_putWeak)
HXDLIN(  79)		if (this->_weak) {
HXLINE(  81)			this->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,putWeak,(void))

 ::flixel::math::FlxPoint FlxPoint_obj::set(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_93_set)
HXLINE(  94)		this->set_x(X);
HXLINE(  95)		this->set_y(Y);
HXLINE(  96)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,set,return )

 ::flixel::math::FlxPoint FlxPoint_obj::add(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_107_add)
HXLINE( 108)		this->set_x((this->x + X));
HXLINE( 109)		this->set_y((this->y + Y));
HXLINE( 110)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,add,return )

 ::flixel::math::FlxPoint FlxPoint_obj::addPoint( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_120_addPoint)
HXLINE( 121)		{
HXLINE( 121)			this->set_x((this->x + point->x));
HXDLIN( 121)			this->set_y((this->y + point->y));
            		}
HXLINE( 122)		if (point->_weak) {
HXLINE( 122)			point->put();
            		}
HXLINE( 123)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,addPoint,return )

 ::flixel::math::FlxPoint FlxPoint_obj::addPointWeak( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_134_addPointWeak)
HXLINE( 135)		this->set_x((this->x + point->x));
HXLINE( 136)		this->set_y((this->y + point->y));
HXLINE( 137)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,addPointWeak,return )

 ::flixel::math::FlxPoint FlxPoint_obj::subtract(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_148_subtract)
HXLINE( 149)		this->set_x((this->x - X));
HXLINE( 150)		this->set_y((this->y - Y));
HXLINE( 151)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,subtract,return )

 ::flixel::math::FlxPoint FlxPoint_obj::subtractPoint( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_161_subtractPoint)
HXLINE( 162)		{
HXLINE( 162)			this->set_x((this->x - point->x));
HXDLIN( 162)			this->set_y((this->y - point->y));
            		}
HXLINE( 163)		if (point->_weak) {
HXLINE( 163)			point->put();
            		}
HXLINE( 164)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,subtractPoint,return )

 ::flixel::math::FlxPoint FlxPoint_obj::subtractPointWeak( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_175_subtractPointWeak)
HXLINE( 176)		this->set_x((this->x - point->x));
HXLINE( 177)		this->set_y((this->y - point->y));
HXLINE( 178)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,subtractPointWeak,return )

 ::flixel::math::FlxPoint FlxPoint_obj::scale(Float k){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_189_scale)
HXLINE( 190)		this->set_x((this->x * k));
HXLINE( 191)		this->set_y((this->y * k));
HXLINE( 192)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,scale,return )

 ::flixel::math::FlxPoint FlxPoint_obj::copyFrom( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_202_copyFrom)
HXLINE( 203)		this->set_x(point->x);
HXLINE( 204)		this->set_y(point->y);
HXLINE( 205)		if (point->_weak) {
HXLINE( 205)			point->put();
            		}
HXLINE( 206)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFrom,return )

 ::flixel::math::FlxPoint FlxPoint_obj::copyTo( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_216_copyTo)
HXLINE( 217)		if (::hx::IsNull( point )) {
HXLINE( 219)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 219)			point1->_inPool = false;
HXDLIN( 219)			point = point1;
            		}
HXLINE( 221)		point->set_x(this->x);
HXLINE( 222)		point->set_y(this->y);
HXLINE( 223)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyTo,return )

 ::flixel::math::FlxPoint FlxPoint_obj::copyFromFlash( ::openfl::geom::Point FlashPoint){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_233_copyFromFlash)
HXLINE( 234)		this->set_x(FlashPoint->x);
HXLINE( 235)		this->set_y(FlashPoint->y);
HXLINE( 236)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFromFlash,return )

 ::openfl::geom::Point FlxPoint_obj::copyToFlash( ::openfl::geom::Point FlashPoint){
            	HX_GC_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_246_copyToFlash)
HXLINE( 247)		if (::hx::IsNull( FlashPoint )) {
HXLINE( 249)			FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 252)		FlashPoint->x = this->x;
HXLINE( 253)		FlashPoint->y = this->y;
HXLINE( 254)		return FlashPoint;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyToFlash,return )

 ::openfl::geom::Point FlxPoint_obj::addToFlash( ::openfl::geom::Point FlashPoint){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_264_addToFlash)
HXLINE( 265)		 ::openfl::geom::Point FlashPoint1 = FlashPoint;
HXDLIN( 265)		FlashPoint1->x = (FlashPoint1->x + this->x);
HXLINE( 266)		 ::openfl::geom::Point FlashPoint2 = FlashPoint;
HXDLIN( 266)		FlashPoint2->y = (FlashPoint2->y + this->y);
HXLINE( 268)		return FlashPoint;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,addToFlash,return )

 ::openfl::geom::Point FlxPoint_obj::subtractFromFlash( ::openfl::geom::Point FlashPoint){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_278_subtractFromFlash)
HXLINE( 279)		 ::openfl::geom::Point FlashPoint1 = FlashPoint;
HXDLIN( 279)		FlashPoint1->x = (FlashPoint1->x - this->x);
HXLINE( 280)		 ::openfl::geom::Point FlashPoint2 = FlashPoint;
HXDLIN( 280)		FlashPoint2->y = (FlashPoint2->y - this->y);
HXLINE( 282)		return FlashPoint;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,subtractFromFlash,return )

bool FlxPoint_obj::inCoords(Float RectX,Float RectY,Float RectWidth,Float RectHeight){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_296_inCoords)
HXDLIN( 296)		return ::flixel::math::FlxMath_obj::pointInCoordinates(this->x,this->y,RectX,RectY,RectWidth,RectHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_obj,inCoords,return )

bool FlxPoint_obj::inRect( ::flixel::math::FlxRect Rect){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_307_inRect)
HXDLIN( 307)		return ::flixel::math::FlxMath_obj::pointInFlxRect(this->x,this->y,Rect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,inRect,return )

Float FlxPoint_obj::distanceTo( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_317_distanceTo)
HXLINE( 318)		Float dx = (this->x - point->x);
HXLINE( 319)		Float dy = (this->y - point->y);
HXLINE( 320)		if (point->_weak) {
HXLINE( 320)			point->put();
            		}
HXLINE( 321)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,distanceTo,return )

 ::flixel::math::FlxPoint FlxPoint_obj::floor(){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_328_floor)
HXLINE( 329)		this->set_x(( (Float)(::Math_obj::floor(this->x)) ));
HXLINE( 330)		this->set_y(( (Float)(::Math_obj::floor(this->y)) ));
HXLINE( 331)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,floor,return )

 ::flixel::math::FlxPoint FlxPoint_obj::ceil(){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_338_ceil)
HXLINE( 339)		this->set_x(( (Float)(::Math_obj::ceil(this->x)) ));
HXLINE( 340)		this->set_y(( (Float)(::Math_obj::ceil(this->y)) ));
HXLINE( 341)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,ceil,return )

 ::flixel::math::FlxPoint FlxPoint_obj::round(){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_348_round)
HXLINE( 349)		this->set_x(( (Float)(::Math_obj::round(this->x)) ));
HXLINE( 350)		this->set_y(( (Float)(::Math_obj::round(this->y)) ));
HXLINE( 351)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,round,return )

 ::flixel::math::FlxPoint FlxPoint_obj::rotate( ::flixel::math::FlxPoint Pivot,Float Angle){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_362_rotate)
HXLINE( 363)		Float radians = (Angle * (::Math_obj::PI / ( (Float)(180) )));
HXLINE( 364)		Float n = radians;
HXDLIN( 364)		n = (n * ((Float)0.3183098862));
HXDLIN( 364)		if ((n > 1)) {
HXLINE( 364)			n = (n - ( (Float)(((::Math_obj::ceil(n) >> 1) << 1)) ));
            		}
            		else {
HXLINE( 364)			if ((n < -1)) {
HXLINE( 364)				n = (n + ((::Math_obj::ceil(-(n)) >> 1) << 1));
            			}
            		}
HXDLIN( 364)		Float sin;
HXDLIN( 364)		if ((n > 0)) {
HXLINE( 364)			sin = (n * (((Float)3.1) + (n * (((Float)0.5) + (n * (((Float)-7.2) + (n * ((Float)3.6))))))));
            		}
            		else {
HXLINE( 364)			sin = (n * (((Float)3.1) - (n * (((Float)0.5) + (n * (((Float)7.2) + (n * ((Float)3.6))))))));
            		}
HXLINE( 365)		Float n1 = (radians + ((Float)1.570796327));
HXDLIN( 365)		n1 = (n1 * ((Float)0.3183098862));
HXDLIN( 365)		if ((n1 > 1)) {
HXLINE( 365)			n1 = (n1 - ( (Float)(((::Math_obj::ceil(n1) >> 1) << 1)) ));
            		}
            		else {
HXLINE( 365)			if ((n1 < -1)) {
HXLINE( 365)				n1 = (n1 + ((::Math_obj::ceil(-(n1)) >> 1) << 1));
            			}
            		}
HXDLIN( 365)		Float cos;
HXDLIN( 365)		if ((n1 > 0)) {
HXLINE( 365)			cos = (n1 * (((Float)3.1) + (n1 * (((Float)0.5) + (n1 * (((Float)-7.2) + (n1 * ((Float)3.6))))))));
            		}
            		else {
HXLINE( 365)			cos = (n1 * (((Float)3.1) - (n1 * (((Float)0.5) + (n1 * (((Float)7.2) + (n1 * ((Float)3.6))))))));
            		}
HXLINE( 367)		Float dx = (this->x - Pivot->x);
HXLINE( 368)		Float dy = (this->y - Pivot->y);
HXLINE( 369)		this->set_x((((cos * dx) - (sin * dy)) + Pivot->x));
HXLINE( 370)		this->set_y((((sin * dx) + (cos * dy)) + Pivot->y));
HXLINE( 372)		if (Pivot->_weak) {
HXLINE( 372)			Pivot->put();
            		}
HXLINE( 373)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,rotate,return )

Float FlxPoint_obj::angleBetween( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_383_angleBetween)
HXLINE( 384)		Float x = (point->x - this->x);
HXLINE( 385)		Float y = (point->y - this->y);
HXLINE( 386)		Float angle = ( (Float)(0) );
HXLINE( 388)		bool _hx_tmp;
HXDLIN( 388)		if ((x == 0)) {
HXLINE( 388)			_hx_tmp = (y != 0);
            		}
            		else {
HXLINE( 388)			_hx_tmp = true;
            		}
HXDLIN( 388)		if (_hx_tmp) {
HXLINE( 390)			Float c1 = (::Math_obj::PI * ((Float)0.25));
HXLINE( 391)			Float c2 = (( (Float)(3) ) * c1);
HXLINE( 392)			Float ay;
HXDLIN( 392)			if ((y < 0)) {
HXLINE( 392)				ay = -(y);
            			}
            			else {
HXLINE( 392)				ay = y;
            			}
HXLINE( 394)			if ((x >= 0)) {
HXLINE( 396)				angle = (c1 - (c1 * ((x - ay) / (x + ay))));
            			}
            			else {
HXLINE( 400)				angle = (c2 - (c1 * ((x + ay) / (ay - x))));
            			}
HXLINE( 402)			Float angle1;
HXDLIN( 402)			if ((y < 0)) {
HXLINE( 402)				angle1 = -(angle);
            			}
            			else {
HXLINE( 402)				angle1 = angle;
            			}
HXDLIN( 402)			angle = (angle1 * (( (Float)(180) ) / ::Math_obj::PI));
HXLINE( 404)			if ((angle > 90)) {
HXLINE( 406)				angle = (angle - ( (Float)(270) ));
            			}
            			else {
HXLINE( 410)				angle = (angle + 90);
            			}
            		}
HXLINE( 414)		if (point->_weak) {
HXLINE( 414)			point->put();
            		}
HXLINE( 415)		return angle;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,angleBetween,return )

 ::flixel::math::FlxPoint FlxPoint_obj::toVector(){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_425_toVector)
HXDLIN( 425)		Float x = this->x;
HXDLIN( 425)		Float y = this->y;
HXDLIN( 425)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(x,y);
HXDLIN( 425)		point->_inPool = false;
HXDLIN( 425)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,toVector,return )

bool FlxPoint_obj::equals( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_435_equals)
HXLINE( 436)		bool result;
HXDLIN( 436)		if ((::Math_obj::abs((this->x - point->x)) <= ((Float)0.0000001))) {
HXLINE( 436)			result = (::Math_obj::abs((this->y - point->y)) <= ((Float)0.0000001));
            		}
            		else {
HXLINE( 436)			result = false;
            		}
HXLINE( 437)		if (point->_weak) {
HXLINE( 437)			point->put();
            		}
HXLINE( 438)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,equals,return )

void FlxPoint_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_444_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,destroy,(void))

 ::flixel::math::FlxPoint FlxPoint_obj::transform( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_452_transform)
HXLINE( 453)		Float x1 = (((this->x * matrix->a) + (this->y * matrix->c)) + matrix->tx);
HXLINE( 454)		Float y1 = (((this->x * matrix->b) + (this->y * matrix->d)) + matrix->ty);
HXLINE( 456)		return this->set(x1,y1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,transform,return )

::String FlxPoint_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_464_toString)
HXDLIN( 464)		 ::Dynamic value = this->x;
HXDLIN( 464)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 464)		_this->label = HX_("x",78,00,00,00);
HXDLIN( 464)		_this->value = value;
HXDLIN( 464)		 ::Dynamic value1 = this->y;
HXDLIN( 464)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 464)		_this1->label = HX_("y",79,00,00,00);
HXDLIN( 464)		_this1->value = value1;
HXDLIN( 464)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,toString,return )

Float FlxPoint_obj::set_x(Float Value){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_472_set_x)
HXDLIN( 472)		return (this->x = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_x,return )

Float FlxPoint_obj::set_y(Float Value){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_480_set_y)
HXDLIN( 480)		return (this->y = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_y,return )

 ::flixel::util::FlxPool_flixel_math_FlxPoint FlxPoint_obj::_pool;

 ::flixel::math::FlxPoint FlxPoint_obj::get(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_28_get)
HXLINE(  29)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXLINE(  30)		point->_inPool = false;
HXLINE(  31)		return point;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,get,return )

 ::flixel::math::FlxPoint FlxPoint_obj::weak(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_43_weak)
HXLINE(  44)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN(  44)		point->_inPool = false;
HXDLIN(  44)		 ::flixel::math::FlxPoint point1 = point;
HXLINE(  45)		point1->_weak = true;
HXLINE(  46)		return point1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,weak,return )

::Dynamic FlxPoint_obj::get_pool(){
            	HX_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_485_get_pool)
HXDLIN( 485)		return ::flixel::math::FlxPoint_obj::_pool;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,get_pool,return )


::hx::ObjectPtr< FlxPoint_obj > FlxPoint_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y) {
	::hx::ObjectPtr< FlxPoint_obj > __this = new FlxPoint_obj();
	__this->__construct(__o_X,__o_Y);
	return __this;
}

::hx::ObjectPtr< FlxPoint_obj > FlxPoint_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y) {
	FlxPoint_obj *__this = (FlxPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPoint_obj), false, "flixel.math.FlxPoint"));
	*(void **)__this = FlxPoint_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y);
	return __this;
}

FlxPoint_obj::FlxPoint_obj()
{
}

::hx::Val FlxPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return ::hx::Val( put_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ceil") ) { return ::hx::Val( ceil_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_weak") ) { return ::hx::Val( _weak ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"floor") ) { return ::hx::Val( floor_dyn() ); }
		if (HX_FIELD_EQ(inName,"round") ) { return ::hx::Val( round_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"inRect") ) { return ::hx::Val( inRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { return ::hx::Val( _inPool ); }
		if (HX_FIELD_EQ(inName,"putWeak") ) { return ::hx::Val( putWeak_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return ::hx::Val( subtract_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"inCoords") ) { return ::hx::Val( inCoords_dyn() ); }
		if (HX_FIELD_EQ(inName,"toVector") ) { return ::hx::Val( toVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addToFlash") ) { return ::hx::Val( addToFlash_dyn() ); }
		if (HX_FIELD_EQ(inName,"distanceTo") ) { return ::hx::Val( distanceTo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return ::hx::Val( copyToFlash_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addPointWeak") ) { return ::hx::Val( addPointWeak_dyn() ); }
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return ::hx::Val( angleBetween_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtractPoint") ) { return ::hx::Val( subtractPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return ::hx::Val( copyFromFlash_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"subtractPointWeak") ) { return ::hx::Val( subtractPointWeak_dyn() ); }
		if (HX_FIELD_EQ(inName,"subtractFromFlash") ) { return ::hx::Val( subtractFromFlash_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPoint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_pool() ); return true; } }
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = ( _pool ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_pool") ) { outValue = get_pool_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_weak") ) { _weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::flixel::util::FlxPool_flixel_math_FlxPoint >(); return true; }
	}
	return false;
}

void FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("_weak",57,78,06,02));
	outFields->push(HX_("_inPool",00,71,39,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxPoint_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxPoint_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsBool,(int)offsetof(FlxPoint_obj,_weak),HX_("_weak",57,78,06,02)},
	{::hx::fsBool,(int)offsetof(FlxPoint_obj,_inPool),HX_("_inPool",00,71,39,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxPoint_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::util::FlxPool_flixel_math_FlxPoint */ ,(void *) &FlxPoint_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxPoint_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("_weak",57,78,06,02),
	HX_("_inPool",00,71,39,f5),
	HX_("put",cf,62,55,00),
	HX_("putWeak",e7,fe,6e,fd),
	HX_("set",a2,9b,57,00),
	HX_("add",21,f2,49,00),
	HX_("addPoint",6f,da,ec,3f),
	HX_("addPointWeak",87,c6,aa,23),
	HX_("subtract",14,75,11,f8),
	HX_("subtractPoint",9c,c6,66,44),
	HX_("subtractPointWeak",34,cd,92,d2),
	HX_("scale",8a,ce,ce,78),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyTo",90,1c,33,c9),
	HX_("copyFromFlash",71,a5,da,18),
	HX_("copyToFlash",00,ff,24,25),
	HX_("addToFlash",14,ae,9a,36),
	HX_("subtractFromFlash",32,48,51,65),
	HX_("inCoords",e3,ed,02,51),
	HX_("inRect",a9,2b,0d,88),
	HX_("distanceTo",10,d4,ec,8b),
	HX_("floor",cc,d1,96,02),
	HX_("ceil",05,1f,bd,41),
	HX_("round",4e,f8,65,ed),
	HX_("rotate",5b,46,20,cb),
	HX_("angleBetween",35,e6,d4,69),
	HX_("toVector",9e,58,9c,be),
	HX_("equals",3f,ee,f2,bf),
	HX_("destroy",fa,2c,86,24),
	HX_("transform",6c,2d,93,45),
	HX_("toString",ac,d0,6e,38),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	::String(null()) };

static void FlxPoint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPoint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#endif

::hx::Class FlxPoint_obj::__mClass;

static ::String FlxPoint_obj_sStaticFields[] = {
	HX_("_pool",bb,9c,6d,fd),
	HX_("get",96,80,4e,00),
	HX_("weak",78,5c,f5,4e),
	HX_("get_pool",65,3c,17,ca),
	::String(null())
};

void FlxPoint_obj::__register()
{
	FlxPoint_obj _hx_dummy;
	FlxPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxPoint",72,08,84,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPoint_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPoint_obj::__SetStatic;
	__mClass->mMarkFunc = FlxPoint_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxPoint_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxPoint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPoint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxPoint_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_cceaeff5e596bc9e_17_boot)
HXDLIN(  17)		_pool =  ::flixel::util::FlxPool_flixel_math_FlxPoint_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::math::FlxPoint >());
            	}
}

} // end namespace flixel
} // end namespace math