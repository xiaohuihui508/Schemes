//
//  Header.h
//  APP
//
//  Created by 程辉 on 2019/6/27.
//  Copyright © 2019 CY. All rights reserved.
//

//TARGETTYPE==0
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

//app
#if TARGETTYPE == 0
#define RELEASE_PRO                  1
#endif
//appdev

#if TARGETTYPE == 1
#define RELEASE_DEV                 1
#endif

#if TARGETTYPE == 2
#define RELEASE_QA                 1
#endif


#ifdef RELEASE_DEV

#define kServerAddress              @"dev.i4u.net.cn"

#endif

#ifdef RELEASE_PRO

#define kServerAddress              @"www.i4u.net.cn"

#endif


#ifdef RELEASE_QA

#define kServerAddress              @"qc.i4u.net.cn"

#endif
