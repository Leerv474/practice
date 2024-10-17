package com.demo.app.services;

import java.util.HashSet;
import java.util.Set;

import com.demo.app.model.ApplicationUser;
import com.demo.app.model.Role;
import com.demo.app.repository.RoleRepository;
import com.demo.app.repository.UserRepository;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@Service
@Transactional
public class AuthenticationService {
    @Autowired
    private UserRepository userRepository;

    @Autowired
    private RoleRepository roleRepository;

    @Autowired
    private PasswordEncoder passwordEncoder;

    public ApplicationUser registerUser(String username, String password) {
        String encodedPassword = passwordEncoder.encode(password);
        Role userRole = roleRepository.findByAuthority("USER").get();
        Set<Role> authorities = new HashSet<>();

        authorities.add(userRole);
        return userRepository.save(ApplicationUser.builder()
                .authorities(authorities)
                .username(username)
                .password(encodedPassword)
                .build());
    }
}
