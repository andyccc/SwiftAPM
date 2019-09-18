//
//  CrashHandlerable.swift
//  SwiftAPM
//
//  Created by yans on 2019/9/3.
//

import Foundation

// MARK: - 崩溃处理协议
public protocol CrashHandlerable {
    /// 注册崩溃处理
    static func registerCrashHandler()
    
    /// 清除崩溃处理
    static func clearCrashHandler()
    
    /// 保存崩溃信息
    static func save(crash: Crash.Data)
}

extension CrashHandlerable {
    
    static func save(crash: Crash.Data) {
        crash.save()
    }
    
}
